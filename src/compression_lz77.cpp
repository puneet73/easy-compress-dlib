#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include "../dlib/lz77_buffer/lz77_buffer_kernel_1.h"
#include "../dlib/lz77_buffer/lz77_buffer_kernel_2.h"
#include "../dlib/lz77_buffer/lz77_buffer_kernel_abstract.h"
#include "../dlib/lz77_buffer/lz77_buffer_kernel_c.h"
#include "sliding_buffer.h" 

// Define the total_limit and lookahead_limit values
const unsigned long total_limit = 16;  // Example value, adjust as needed
const unsigned long lookahead_limit = 32;  // Example value, adjust as needed

template<typename T>
void compress_and_decompress(std::string& input_data) {
    try {
        // Create instances of lz77_buffer for compression and decompression
        T compressor(total_limit, lookahead_limit);
        T decompressor(total_limit, lookahead_limit);

        std::string compressed_data;
        std::string decompressed_data;

        // Compress the input data
        for (char c : input_data) {
            compressor.add(static_cast<unsigned char>(c));
            unsigned long index, length;
            compressor.find_match(index, length, 3);  // Minimum match length of 3
            if (length > 0) {
                // Encode the match (index, length)
                // ...
            } else {
                // Encode the literal character
                // ...
            }
            compressor.shift_buffers(length);
        }

        // Decompress the compressed data
        // ... (implement decompression logic here)

        // Output the results
        std::cout << "Original Data:\n" << input_data << std::endl;
        std::cout << "Compressed Data:\n" << compressed_data << std::endl;
        std::cout << "Decompressed Data:\n" << decompressed_data << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        throw;
    }
}

template<typename T>
void compress_and_decompress(std::string& input_data) {
    try {
        // Create instances of lz77_buffer for compression and decompression
        T compressor(total_limit, lookahead_limit);
        T decompressor(total_limit, lookahead_limit);

        // ... (rest of the compression/decompression logic)
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        throw;
    }
}


int main() {
    std::string input_data;
    char buffer[1024];

    // Read data from standard input
    while (std::cin.read(buffer, sizeof(buffer))) {
        input_data.append(buffer, std::cin.gcount());
    }

    // Call the compress_and_decompress function with different template arguments
    compress_and_decompress<dlib::lz77_buffer_kernel_1<sliding_buffer>>(input_data);
    compress_and_decompress<dlib::lz77_buffer_kernel_2<sliding_buffer>>(input_data);
    compress_and_decompress<dlib::lz77_buffer_kernel_c<dlib::lz77_buffer_kernel_2<sliding_buffer>>>(input_data);

    return 0;
}