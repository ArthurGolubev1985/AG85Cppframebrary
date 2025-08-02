
#pragma once
#ifndef AFCBT98_1_HPP //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998
#define AFCBT98_1_HPP //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

#include <cstring>

namespace AG85{
namespace Cppframebrary{
namespace Corelibrary1{
namespace CppVersion1998{

    template <typename Type>
    class MemoryhelpingAdd {
    public:

        static unsigned int GetSizeInChars() { return sizeof(Type); };

        void * CopyToBuffer(void * destination) const {
            return memcpy(reinterpret_cast<void *>(destination), reinterpret_cast<const char *>(this), GetSizeInChars()); 
        }

    }; // class MemoryhelpingAdd

    template <typename Type>
    class BufferToTypedAdd {
    public:
    
        static const Type * GetTypedPtr(const void * bufferBegin) { 
            return reinterpret_cast<const Type *>(bufferBegin); 
        }
        
        static Type * GetTypedPtr(void * bufferBegin) { 
            return reinterpret_cast<Type *>(bufferBegin); 
        }

    }; // template <typename Type> class BufferToTypedAdd

    template <typename Type>
    class TypedToBufferAdd {
    public:
    
        const void * GetBufferPtr() const { 
            return reinterpret_cast<const void *>(this); 
        }

        void * GetBufferPtr() {
            return reinterpret_cast<void *>(this); 
        }

    }; // template <typename Type> class TypedToBufferAdd

} //namespace CppVersion1998
} //namespace Corelibrary1
} //namespace Cppframebrary
} //namespace AG19850316

#endif //AFC1BT98_1_HPP - AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
