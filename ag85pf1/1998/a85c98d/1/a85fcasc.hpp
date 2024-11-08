
#pragma once
#ifndef A85FCGC_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#define A85FCGC_HPP //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration

#include <deque>
#include <cstddef>
#include <string>

namespace AG85 {

    namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Application{

                class Applicationstartingconfiguration {
                public:


                    const std::string& GetDemoParameter1StringvalueRef()
                    const
                    {
                        return demoParameter1Stringvalue;
                    }

                    Applicationstartingconfiguration
                    (
                        const std::string & cDemoParameterString
                    )
                    :demoParameter1Stringvalue(cDemoParameterString)
                    {
                    }

                private:

                    const std::string demoParameter1Stringvalue;

                }; //class DemoGeneralDynamicconfiguration

            } //namespace Application

        } //namespace CppVersion1998

    } //namespace Cppframebrary1

} //namespace AG85

#endif //A85FCGC_HPP - AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
