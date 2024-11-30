
#pragma once
#ifndef AFCLIG98_1_HPP //AG19850316CppframebraryPartCorelibrary1GlobalIncrementingintegeridentificatorsgeneratorCpp1998
#define AFCLIG98_1_HPP //AG19850316CppframebraryPartCorelibrary1GlobalIncrementingintegeridentificatorsgeneratorCpp1998

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion1998{

                class GlobalIncrementalunsignedintegeridentificatorsgenerator{
                
                public:

                    void SetValueforGlobalIncrementalunsignedintegeridentificatorsgenerator(unsigned int nValue)
                    {
                        incrementingintegeridsgenerator = nValue;
                    }

                    unsigned int GetNextIdentificator()
                    {
                        return incrementingintegeridsgenerator++;
                    }

                private:
                
                    static unsigned int incrementingintegeridsgenerator;

                }; //class Incrementalidentificatorsgenerator

            } //namespace CppVersion1998

        } //namespace Cppframebrary

	} //namespace Corelibrary1

} //namespace AG19850316

#endif //AFCLIG98_1_HPP - AG19850316CppframebraryPartCorelibrary1GlobalIncrementingintegeridentificatorsgeneratorCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
