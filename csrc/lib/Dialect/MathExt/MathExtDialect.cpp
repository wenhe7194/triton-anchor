//===----------------------------------------------------------------------===//
//
// mlir-ext MathExt 方言实现
//
// 编译 MathExtDialect.cpp.inc 和 MathExtOps.cpp.inc，
// 使 mlir::mathext::DivRzOp、FModOp 等 op 的 TypeID 静态变量得到定义。
// ConversionPatterns.hpp 引用了这些 op，linker 需要在此找到它们的 TypeID。
//
//===----------------------------------------------------------------------===//

#include "mlir-ext/Dialect/MathExt/IR/MathExt.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/DialectImplementation.h"

// 定义 dialect 的静态成员（TypeID 等）
#define GET_DIALECT_DEFS
#include "mlir-ext/Dialect/MathExt/IR/MathExtDialect.cpp.inc"

// 定义所有 op 的静态成员（TypeID 静态变量）
#define GET_OP_CLASSES
#include "mlir-ext/Dialect/MathExt/IR/MathExtOps.cpp.inc"
