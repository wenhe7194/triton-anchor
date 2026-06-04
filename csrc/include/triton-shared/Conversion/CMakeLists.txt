# triton-anchor: 仅保留 flir 原生 pass 的 TableGen 头文件处理
#
# ⚠️ 凡是涉及 MagicKernel (MK) / Address / tsingmicro 专有方言的头文件，
#    一律移至 triton-tsingmicro-backend/csrc/include/triton-shared/Conversion/ 处理。

add_subdirectory(TritonToLinalg)
add_subdirectory(TritonToStructured)
add_subdirectory(TritonToUnstructured)
add_subdirectory(UnstructuredToMemref)
add_subdirectory(TritonPtrToMemref)
