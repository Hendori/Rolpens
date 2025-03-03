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
PLUGIN_DIR="$(pwd)"
BINARY="$1"
shift

GRADLE_VERSION=8.9

if [ ! -x "$PLUGIN_DIR/gradlew" ]; then
	cd "$PLUGIN_DIR"
	gradle wrapper --gradle-version $GRADLE_VERSION || (
		echo "Failed to create a gradle wrapper. (try 'apt-get install gradle')" >&2
		exit 1
	)
fi

if [ -f "build.gradle" -a -f "extension.properties" ]; then
	echo "Building extension..."
	mkdir -p ~/.gradle/daemon/$GRADLE_VERSION
	rm -f ~/.gradle/daemon/$GRADLE_VERSION/'<REPLACE>'
	ln -sf "$GHIDRA_PATH" ~/.gradle/daemon/$GRADLE_VERSION/'<REPLACE>'
	"$PLUGIN_DIR/gradlew" build || exit $?

	echo "Installing extension..."
	mkdir -p "$GHIDRA_PATH/Ghidra/Extensions/$(basename "$PLUGIN_DIR")"
	cp -r "$PLUGIN_DIR"/* "$GHIDRA_PATH/Ghidra/Extensions/$(basename "$PLUGIN_DIR")/"
fi

if [ -z "$BINARY" ]; then
	echo "Usage: '$0' BINARY [FUNCTION_NAME[ ...]]" >&2
	exit 1
fi


mkdir -p /tmp/ghidra

"$GHIDRA_PATH/support/analyzeHeadless" \
	/tmp/ghidra Project1 \
	-import "$BINARY" -overwrite \
	-scriptPath "$THIS_DIR" -postScript decompile_simple.py "$@"

EXIT_STATUS=$?

if [ -f "build.gradle" -a -f "extension.properties" ]; then
	echo "Removing extension..."
	for plugin_jar in build/libs/*.jar; do
		rm -rf "$GHIDRA_PATH/Ghidra/Extensions/$(basename "$PLUGIN_DIR")"
	done
fi

exit $EXIT_STATUS

