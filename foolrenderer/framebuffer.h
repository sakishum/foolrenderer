// Copyright (c) 2021 Caden Ji
//
// MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef FOOLRENDERER_FRAMEBUFFER_H_
#define FOOLRENDERER_FRAMEBUFFER_H_

#include <stdint.h>

///
/// \brief A framebuffer is a collection of buffers that can be used as the
///        destination for rendering.
///
/// The origin (0, 0) of all buffers is in the bottom-left corner.
///
struct framebuffer {
    uint32_t width, height;
    uint8_t *color_buffer;
    float *depth_buffer;
};

///
/// \brief Creates a framebuffer of the specified dimension.
///
/// \param width The framebuffer width in pixel.
/// \param height The framebuffer height in pixel.
/// \return Returns the framebuffer pointer if the generation is successful,
///         otherwise returns NULL.
///
struct framebuffer *generate_framebuffer(uint32_t width, uint32_t height);

///
/// \brief Uses the default value to clear all the buffers in the framebuffer at
///        one time.
///
/// The default value for clearing the color buffer is 0x0, and the default
/// value for clearing the depth buffer is 1.0f.
///
/// \param framebuffer The framebuffer to be cleared.
///
void clear_framebuffer(struct framebuffer *framebuffer);

///
/// \brief Deletes the framebuffer.
///
/// \param framebuffer The framebuffer to be deleted.
///
void delete_framebuffer(struct framebuffer *framebuffer);

#endif  // FOOLRENDERER_FRAMEBUFFER_H_