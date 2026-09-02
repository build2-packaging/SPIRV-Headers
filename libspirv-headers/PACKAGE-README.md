# libspirv-headers - Machine-readable headers for the SPIR-V registry

This is a `build2` package for the
[`SPIRV-Headers`](https://github.com/KhronosGroup/SPIRV-Headers)
library. It provides the public C and C++ headers for the SPIR-V registry
(`spirv/unified1/spirv.h`, `spirv.hpp`, `spirv.hpp11`, and the extended
instruction set headers), plus the JSON grammars and XML registry that
upstream installs next to them.


## Usage

To start using `libspirv-headers` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libspirv-headers ^1.4.357
```

Then import the library in your `buildfile`:

```
import libs = libspirv-headers%lib{spirv-headers}
```


## Importable targets

This package provides the following importable targets:

```
lib{spirv-headers}
```

The SPIR-V headers and machine-readable files (`#include <spirv/unified1/spirv.h>`
and the rest of `include/spirv/`).


## Configuration variables

This package has no configuration variables.
