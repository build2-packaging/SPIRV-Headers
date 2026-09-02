# SPIRV-Headers - Machine-readable headers for the SPIR-V registry

This is a `build2` package repository for
[`SPIRV-Headers`](https://github.com/KhronosGroup/SPIRV-Headers), containing
the `libspirv-headers` package (C and C++ headers, JSON grammars, and the
XML registry).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libspirv-headers` in your `build2`-based project, then instead see the
accompanying
[`libspirv-headers/PACKAGE-README.md`](libspirv-headers/PACKAGE-README.md)
file.

The development setup for `SPIRV-Headers` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/SPIRV-Headers.git
cd SPIRV-Headers

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
