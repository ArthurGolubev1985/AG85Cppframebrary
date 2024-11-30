
#pragma once
#ifndef AFCLII98_1_HPP //AG19850316CppframebraryPartCorelibrary1InstanceIncrementingintegeridentificatorsgeneratorCpp1998
#define AFCLII98_1_HPP //AG19850316CppframebraryPartCorelibrary1InstanceIncrementingintegeridentificatorsgeneratorCpp1998

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion1998{

                class InstanceIncrementalunsignedintegeridentificatorsgenerator{
                
                public:

                    InstanceIncrementalunsignedintegeridentificatorsgenerator(unsigned int startingValue)
                    :incrementingintegeridsgenerator(startingValue)
                    {                
                    }

                    unsigned int GetNextIdentificator()
                    {
                        return incrementingintegeridsgenerator++;
                    }
                    
                private:
                
                    unsigned int incrementingintegeridsgenerator;

                }; //class Incrementalidentificatorsgenerator

            } //namespace CppVersion1998

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCLII98_1_HPP - AG19850316CppframebraryPartCorelibrary1InstanceIncrementingintegeridentificatorsgeneratorCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
