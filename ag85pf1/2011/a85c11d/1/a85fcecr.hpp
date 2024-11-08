
#pragma once
#ifndef A85FCECR_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader
#define A85FCECR_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader

#include <deque>
#include <string>

#include "..//..//..//1998//a85f98cl//1//a85fcecs.hpp" //AG19850316Cppframebrary1PartCorelibrary1EnvironmentCommandlineargumentsStorage

#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration

#include <iostream>

namespace AG85 {

    namespace Cppframebrary1{

        using namespace CppVersion1998::Corelibrary1;

        namespace CppVersion2011{

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

            } //namespace CppVersion2011

        } //namespace Cppframebrary1

    } //namespace Application

} //namespace AG85

#endif //A85FCECR_HPP - AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
