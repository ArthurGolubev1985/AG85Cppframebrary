
#pragma once
#ifndef AFCLIG11_1_HPP //AG19850316CppframebraryPartCorelibrary1GlobalAtomicIncrementingintegeridentificatorsgeneratorCpp2011
#define AFCLIG11_1_HPP //AG19850316CppframebraryPartCorelibrary1GlobalAtomicIncrementingintegeridentificatorsgeneratorCpp2011

#include <atomic>

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion2011{

                class GlobalAtomicIncrementalunsignedintegeridentificatorsgenerator{
                
                public:

                    void SetValueforGlobalIncrementalunsignedintegeridentificatorsgenerator(unsigned int nValue)
                    {
                        incrementingatomicintegeridsgenerator = nValue;
                    }

                    unsigned int GetNextIdentificator()
                    {
                        return incrementingatomicintegeridsgenerator++;
                    }
                    
                private:

                    static std::atomic<unsigned int> incrementingatomicintegeridsgenerator;

                }; //class Incrementalidentificatorsgenerator

            } //namespace CppVersion2011

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCLIG11_1_HPP - AG19850316CppframebraryPartCorelibrary1GlobalAtomicIncrementingintegeridentificatorsgeneratorCpp2011

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
