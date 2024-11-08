
#pragma once
#ifndef A85FCECS_HPP //AG19850316Cppframebrary1Part1998Corelibrary1EnvironmentCommandlineargumentsstorage
#define A85FCECS_HPP //AG19850316Cppframebrary1Part1998Corelibrary1EnvironmentCommandlineargumentsstorage

#include <string>
#include <deque>

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Corelibrary1 {

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

            } //namespace Corelibrary1

        } //namespace CppVersion1998

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCECS_HPP - AG19850316Cppframebrary1Part1998Corelibrary1EnvironmentCommandlineargumentsstorage

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
