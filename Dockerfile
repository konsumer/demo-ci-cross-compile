# this is the builder for cross-building linux node-raylib

# PUBLISH:
# docker buildx build --platform linux/arm64,linux/arm/v7 -t konsumer/node-raylib-builder:latest --push .

FROM ubuntu:latest

RUN apt-get update && apt-get install -y curl && curl -fsSL https://deb.nodesource.com/setup_18.x | bash -
RUN apt-get update && apt-get install -y xorg-dev libglu1-mesa-dev cmake git g++ nodejs

WORKDIR /workdir