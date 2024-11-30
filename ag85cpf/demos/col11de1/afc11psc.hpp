
#pragma once
#ifndef AFC11SC_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramCommandlineconfiguration
#define AFC11SC_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramCommandlineconfiguration

#include <deque>
#include <cstddef>
#include <string>

namespace AG85 {

    namespace Cppframebrary{

        namespace CoreLibraryCpp2011Demo1{

            class ProgramCommandlineconfiguration {
            public:


                const std::string& GetDemoParameter1StringvalueRef()
                const
                {
                    return demoParameter1Stringvalue;
                }

                ProgramCommandlineconfiguration
                (
                    const std::string & cDemoParameterString
                )
                :demoParameter1Stringvalue(cDemoParameterString)
                {
                }

            private:

                const std::string demoParameter1Stringvalue;

            }; //class DemoGeneralDynamicconfiguration

        } //namespace Cppframebrary

    } //namespace CoreLibraryCpp2011Demo1

} //namespace AG85

#endif //AFC11SC_1_HPP - AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramCommandlineconfiguration

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
