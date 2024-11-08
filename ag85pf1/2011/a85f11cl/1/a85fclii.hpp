
#pragma once
#ifndef A85FCAII_HPP //AG19850316Cppframebrary1Part2011Corelibrary1InstanceAtomicIncrementingintegeridentificatorsgenerator
#define A85FCAII_HPP //AG19850316Cppframebrary1Part2011Corelibrary1InstanceAtomicIncrementingintegeridentificatorsgenerator

#include <atomic>

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion2011{

            namespace Corelibrary1 {

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

            } //namespace CppVersion2011

        } //namespace Corelibrary1

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCAII_HPP - AG19850316Cppframebrary1Part2011Corelibrary1InstanceIncrementingintegeridentificatorsgenerator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
