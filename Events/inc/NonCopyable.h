#pragma once

/*
 *  Copyright(c) 2020 Jeremiah van Oosten
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files(the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions :
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THE SOFTWARE.
 */

/**
 *  @file NonCopyable.h
 *  @date March 5, 2020
 *  @author Jeremiah van Oosten
 *
 *  @brief Ensures that default copy and assignment operators are deleted.
 *  Objects should not be copied or assigned unless explicitly allowed by 
 *  defining the appropriate functions in the derived class.
 */

class NonCopyable
{
protected:
    constexpr NonCopyable() = default;
    ~NonCopyable() = default;

    NonCopyable( const NonCopyable& ) = delete;
    NonCopyable( NonCopyable&& ) = delete;

    NonCopyable& operator=(const NonCopyable& ) = delete;
    NonCopyable& operator=( NonCopyable&& ) = delete;
};