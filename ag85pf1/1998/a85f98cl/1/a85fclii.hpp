
#pragma once
#ifndef A85FCLII_HPP //AG19850316Cppframebrary1Part1998Corelibrary1InstanceIncrementingintegeridentificatorsgenerator
#define A85FCLII_HPP //AG19850316Cppframebrary1Part1998Corelibrary1InstanceIncrementingintegeridentificatorsgenerator

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Corelibrary1 {

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

            } //namespace Corelibrary1

        } //namespace CppVersion1998

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCLII_HPP - AG19850316Cppframebrary1Part1998Corelibrary1InstanceIncrementingintegeridentificatorsgenerator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
