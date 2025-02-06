#!/bin/bash

if [ -z "$GHIDRA_PATH" ]; then
	echo "Please set "\$"GHIDRA_PATH to the location of you Ghidra install" >&2
	exit 1
fi
if [ ! -x "$GHIDRA_PATH/support/analyzeHeadless" ]; then
	echo "Ghidra not found at '$GHIDRA_PATH'" >&2
	exit 1
fi

THIS_DIR="$(dirname "$0")"
echo "\$0: '$0'"
echo "THIS_DIR: '$THIS_DIR'"
BINARY="$1"
shift

if [ -z "$BINARY" ]; then
	echo "Usage: '$0' BINARY [FUNCTION_NAME[ ...]]" >&2
	exit 1
fi


mkdir -p /tmp/ghidra

exec "$GHIDRA_PATH/support/analyzeHeadless" \
	/tmp/ghidra Project1 \
	-import "$BINARY" -overwrite \
	-scriptPath "$THIS_DIR" -postScript decompile_simple.py "$@"
