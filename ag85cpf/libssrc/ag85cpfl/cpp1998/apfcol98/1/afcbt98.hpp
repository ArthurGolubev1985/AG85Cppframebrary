
#pragma once
#ifndef AFCBT98_1_HPP //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998
#define AFCBT98_1_HPP //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

#include <cstring>

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion1998{

                template <typename Type>
                class MemoryhelpingAdditive {
                public:

                    static unsigned int GetSizeInChars() { return sizeof(Type); };

                    void * CopyToBuffer(char * destination) const 
                    { 
                        return memcpy(reinterpret_cast<void *>(destination), reinterpret_cast<const char *>(this), GetSizeInChars()); 
                    }

                    void * CopyToBuffer(unsigned char * destination) const 
                    { 
                        return memcpy(reinterpret_cast<void *>(destination), reinterpret_cast<const char *>(this), GetSizeInChars()); 
                    }

                    void * CopyToBuffer(void * destination) const 
                    { 
                        return memcpy(reinterpret_cast<void *>(destination), reinterpret_cast<const char *>(this), GetSizeInChars()); 
                    }

                }; // class MemoryhelpingAdditive

                template <typename Type>
                class BufferToTypedAdditive 
                {
                public:
                
                    static const Type * GetTypedPtr(const char * bufferBegin) { return (const Type *)(bufferBegin); }
                    static Type * GetTypedPtr(char * bufferBegin) { return (Type *)(bufferBegin); }
                    static const Type * GetTypedPtr(const unsigned char * bufferBegin) { return (const Type *)(bufferBegin); }
                    static Type * GetTypedPtr(unsigned char * bufferBegin) { return (Type *)(bufferBegin); }

                }; // template <typename Type> class BufferToTypedAdditive 

                template <typename Type>
                class TypedToBufferAdditive 
                {
                public:
                
                    const char * GetBufferincharsbegin() const { return (const char *)(this); }

                    char * GetBufferincharsbegin() { return (char *)(this); }

                }; // template <typename Type> class TypedToBufferAdditive

            } //namespace CppVersion1998

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFC1BT98_1_HPP - AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
