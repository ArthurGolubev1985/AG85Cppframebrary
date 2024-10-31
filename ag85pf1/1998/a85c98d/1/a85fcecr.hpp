
#pragma once
#ifndef A85FCECR_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader
#define A85FCECR_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader

#include <deque>
#include <string>

#include "..//..//a85f98cl//1//a85fcecs.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1EnvironmentCommandlineargumentsStorage

#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration

#include <iostream>

namespace AG85 {

    namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Application{

                class Fromenvironenmentcommandlineconfigurationreader {
                public:
                    Applicationstartingconfiguration ProduceDemoGeneraldynamicconfiguration
                    (
                        const EnvironmentCommandlineStringArgumentsStorage & environmentCommandlineArgumentsStorage
                    )
                    {
                        return Applicationstartingconfiguration
                        (
                            environmentCommandlineArgumentsStorage.GetEnvironmentCommandlineArguments()[1]
                        );
                    }
                }; //class Fromenvironenmentcommandlineconfigurationdemoconfigurationreader

            } //namespace Application

        } //namespace CppVersion1998

    } //namespace Cppframebrary1

} //namespace AG85

#endif //A85FCECR_HPP - AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
