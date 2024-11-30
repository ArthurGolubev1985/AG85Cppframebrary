
#pragma once
#ifndef AFCECS98_1_HPP //AG19850316CppframebraryPartCorelibrary1EnvironmentCommandlineargumentsstorageCpp1998
#define AFCECS98_1_HPP //AG19850316CppframebraryPartCorelibrary1EnvironmentCommandlineargumentsstorageCpp1998

#include <string>
#include <deque>

namespace AG85{

	namespace Cppframebrary{

        namespace Corelibrary1{

            namespace CppVersion1998{

                typedef std::deque<std::string> EnvironmentCommandlineStringArgumentsStorageCollectionType;

                class EnvironmentCommandlineStringArgumentsStorage{
                public:

                    const EnvironmentCommandlineStringArgumentsStorageCollectionType & GetEnvironmentCommandlineArguments() const 
                    { 
                        return environmentCommandlineArguments; 
                    }

                    EnvironmentCommandlineStringArgumentsStorage
                    (
                        unsigned int startingSourseArgumentNumber 
                        , int iQuantityOfEnvironmentCommandlineArguments
                        , char* iStorageOfPointersToEnvironmentCommandlineArguments[]
                    )
                    {
                        for 
                        (
                            int numberOfEnvironmentCommadlineArgument = startingSourseArgumentNumber
                            ; numberOfEnvironmentCommadlineArgument < iQuantityOfEnvironmentCommandlineArguments 
                            ; ++numberOfEnvironmentCommadlineArgument
                        ) 
                        {                
                            environmentCommandlineArguments.push_back
                            (
                                iStorageOfPointersToEnvironmentCommandlineArguments[numberOfEnvironmentCommadlineArgument]
                            );
                        }
                    }

                private:

                    EnvironmentCommandlineStringArgumentsStorageCollectionType environmentCommandlineArguments;

                }; //class EnvironmentOutsideCommadlineArgumentsStorage

            } //namespace CppVersion1998

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCECS98_1_HPP - AG19850316CppframebraryPartCorelibrary1EnvironmentCommandlineargumentsstorageCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
