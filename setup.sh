#!/bin/bash

#Update package list
echo "Updating package list..."
sudo apt update

#Install g++ (C++ Compiler)
echo "Installing g++..."
sudo apt install -y g++

#Install cmake (build system)
echo "Installing cmake..."
sudo apt install -y cmake

#Install gdb (debugger)
echo "Installing gdb..."
sudo apt install -y gdb

#verify installations
echo "Verifying installations"
g++ --version
cmake --version
gdb --version

echo "C++ setup complete"