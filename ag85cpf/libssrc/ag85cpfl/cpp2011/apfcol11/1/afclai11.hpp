
#pragma once
#ifndef AFCAII11_1_HPP //AG19850316CppframebraryPartCorelibrary1AtomicIncrementingintegeridentificatorsgeneratorCpp2011
#define AFCAII11_1_HPP //AG19850316CppframebraryPartCorelibrary1AtomicIncrementingintegeridentificatorsgeneratorCpp2011

#include <atomic>

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion2011{

                class InstanceAtomicIncrementalunsignedintegeridentificatorsgenerator{
                
                public:

                    InstanceAtomicIncrementalunsignedintegeridentificatorsgenerator(unsigned int startingValue)
                    :incrementingatomicintegeridsgenerator(startingValue)
                    {                
                    }

                    unsigned int GetNextIdentificator()
                    {
                        return incrementingatomicintegeridsgenerator++;
                    }
                    
                private:
                
                    std::atomic<unsigned int> incrementingatomicintegeridsgenerator;

                }; //class Incrementalidentificatorsgenerator

            } //namespace Corelibrary1

        } //namespace CppVersion2011

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCAII11_1_HPP - AG19850316CppframebraryPartCorelibrary1AtomicIncrementingintegeridentificatorsgeneratorCpp2011

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
