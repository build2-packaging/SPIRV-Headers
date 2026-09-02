#include <spirv/unified1/GLSL.std.450.h>
#include <spirv/unified1/OpenCL.std.h>
#include <spirv/unified1/spirv.hpp>

#undef NDEBUG
#include <cassert>

int main ()
{
  const GLSLstd450 k_sin = GLSLstd450Sin;
  const OpenCLLIB::Entrypoints k_native_cos = OpenCLLIB::Native_cos;
  const spv::Op k_nop = spv::OpNop;

  assert (k_sin == GLSLstd450Sin);
  assert (k_native_cos == OpenCLLIB::Native_cos);
  assert (k_nop == spv::OpNop);
}
