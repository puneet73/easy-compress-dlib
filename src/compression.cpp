#include "easy_compress_dlib/compression.h"
#include <dlib/compress_stream.h>
#include <dlib/entropy_encoder_model.h>
#include <dlib/entropy_decoder_model.h>
#include <dlib/lz77_buffer.h>
#include <dlib/lzp_buffer.h>
#include <sstream>

namespace easy_compress_dlib {

// Helper function to compress data using a compress_stream kernel
template <typename Kernel, typename InputIterator, typename OutputIterator>
void compress(Kernel& kernel, InputIterator input_begin, InputIterator input_end, OutputIterator output_begin) {
    std::istringstream input_stream(std::string(input_begin, input_end));
    std::ostringstream output_stream;
    kernel.compress(input_stream, output_stream);
    std::copy(output_stream.str().begin(), output_stream.str().end(), output_begin);
}

// Helper function to decompress data using a compress_stream kernel
template <typename Kernel, typename InputIterator, typename OutputIterator>
void decompress(Kernel& kernel, InputIterator input_begin, InputIterator input_end, OutputIterator output_begin) {
    std::istringstream input_stream(std::string(input_begin, input_end));
    std::ostringstream output_stream;
    kernel.decompress(input_stream, output_stream);
    std::copy(output_stream.str().begin(), output_stream.str().end(), output_begin);
}

// Compression and decompression functions using various kernels

// compress_stream_kernel_1 implementations
void compress_kernel_1a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1a kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1a kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1b(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1b kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1b(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1b kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1c(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1c kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1c(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1c kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1da(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1da kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1da(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1da kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1db(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1db kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1db(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1db kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1ea(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1ea kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1ea(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1ea kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1eb(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1eb kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1eb(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1eb kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_1ec(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1ec kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_1ec(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_1ec kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}


// compress_stream_kernel_2 implementation
void compress_kernel_2a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_2a kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_2a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_2a kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

// compress_stream_kernel_3 implementations
void compress_kernel_3a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_3a kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_3a(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_3a kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void compress_kernel_3b(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_3b kernel;
    compress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

void decompress_kernel_3b(const std::string& input, std::string& output) {
    dlib::compress_stream::kernel_3b kernel;
    decompress(kernel, input.begin(), input.end(), std::back_inserter(output));
}

} // namespace easy_compress_dlib