# triton-anchor Conversion passes（仅保留 flir 原生、硬件无关的部分）
#
# ⚠️ 凡是 tsingmicro 有定制/扩展的 pass，一律移到 triton-tsingmicro-backend 编译。
#
# flir 原生通用 pass（来自 flir/lib/Conversion/）
add_subdirectory(TritonToLinalg)
add_subdirectory(TritonToStructured)
add_subdirectory(TritonToUnstructured)
add_subdirectory(UnstructuredToMemref)
add_subdirectory(TritonPtrToMemref)
