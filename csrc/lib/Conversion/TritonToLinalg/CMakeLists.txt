#===------------------------------------------------------------------------===#
#
# Copyright (c) Triton Project Contributors.
#
#===------------------------------------------------------------------------===#

add_triton_library(TritonToLinalg
  TritonToLinalg.cpp
  TritonToLinalgPass.cpp

  DEPENDS
  TritonToLinalgConversionPassIncGen
  MLIRMathExtDialectIncGen
  MLIRMathExtOpsIncGen

  LINK_LIBS PUBLIC
  MLIRMathExtDialect
  TritonTilingExtIR
  MLIRArithDialect
  MLIRDialectUtils
  MLIRIR
  MLIRMathDialect
  MLIRPass
  MLIRTensorDialect
  MLIRTransforms
  MLIRSupport
  TritonIR
  TritonTransforms
  TritonSharedAnalysis
)
