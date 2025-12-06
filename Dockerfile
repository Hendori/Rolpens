FROM ghcr.io/astral-sh/uv:python3.13-trixie
RUN apt-get update && apt-get --yes install build-essential npm tree-sitter-cli
COPY . /rolpens
WORKDIR /rolpens

RUN uv sync
RUN uv run python -m rolpens samples/level-0.c

