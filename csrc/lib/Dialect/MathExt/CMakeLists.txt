#===------------------------------------------------------------------------===#
#
# mlir-ext MathExt 方言库
# 编译 .cpp.inc 以定义 mathext op 的 TypeID 静态变量。
# ConversionPatterns.hpp 通过 MathExt.h 引用这些 op，
# linker 需要此库提供 TypeID 的定义。
#
#===------------------------------------------------------------------------===#

add_triton_library(MLIRMathExtDialect
  MathExtDialect.cpp

  DEPENDS
  MLIRMathExtDialectIncGen
  MLIRMathExtOpsIncGen

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRArithDialect
)
