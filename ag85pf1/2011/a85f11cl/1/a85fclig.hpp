
#pragma once
#ifndef A85FCAIG_HPP //AG19850316Cppframebrary1Part2011Corelibrary1GlobalAtomicIncrementingintegeridentificatorsgenerator
#define A85FCAIG_HPP //AG19850316Cppframebrary1Part2011Corelibrary1GlobalAtomicIncrementingintegeridentificatorsgenerator

#include <atomic>

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion2011{

            namespace Corelibrary1 {

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

            } //namespace Corelibrary1

        } //namespace CppVersion2011

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCAIG_HPP - AG19850316Cppframebrary1PartCorelibrary1GlobalIncrementingintegeridentificatorsgenerator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
