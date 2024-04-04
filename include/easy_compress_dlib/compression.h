#ifndef EASY_COMPRESS_DLIB_COMPRESSION_H
#define EASY_COMPRESS_DLIB_COMPRESSION_H

#include <string>

namespace easy_compress_dlib {

// Compression and decompression functions using various kernels

// compress_stream_kernel_1 implementations
void compress_kernel_1a(const std::string& input, std::string& output);
void decompress_kernel_1a(const std::string& input, std::string& output);
void compress_kernel_1b(const std::string& input, std::string& output);
void decompress_kernel_1b(const std::string& input, std::string& output);
void compress_kernel_1c(const std::string& input, std::string& output);
void decompress_kernel_1c(const std::string& input, std::string& output);
void compress_kernel_1da(const std::string& input, std::string& output);
void decompress_kernel_1da(const std::string& input, std::string& output);
void compress_kernel_1db(const std::string& input, std::string& output);
void decompress_kernel_1db(const std::string& input, std::string& output);
void compress_kernel_1ea(const std::string& input, std::string& output);
void decompress_kernel_1ea(const std::string& input, std::string& output);
void compress_kernel_1eb(const std::string& input, std::string& output);
void decompress_kernel_1eb(const std::string& input, std::string& output);
void compress_kernel_1ec(const std::string& input, std::string& output);
void decompress_kernel_1ec(const std::string& input, std::string& output);

// compress_stream_kernel_2 implementation
void compress_kernel_2a(const std::string& input, std::string& output);
void decompress_kernel_2a(const std::string& input, std::string& output);

// compress_stream_kernel_3 implementations
void compress_kernel_3a(const std::string& input, std::string& output);
void decompress_kernel_3a(const std::string& input, std::string& output);
void compress_kernel_3b(const std::string& input, std::string& output);
void decompress_kernel_3b(const std::string& input, std::string& output);


} // namespace easy_compress_dlib

#endif // EASY_COMPRESS_DLIB_COMPRESSION_H
