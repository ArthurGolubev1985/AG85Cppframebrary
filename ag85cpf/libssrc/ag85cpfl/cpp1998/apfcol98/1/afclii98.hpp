
#pragma once
#ifndef AFCLII98_1_HPP //AG19850316CppframebraryPartCorelibrary1IncrementalIdGeneratorCpp1998
#define AFCLII98_1_HPP //AG19850316CppframebraryPartCorelibrary1IncrementalIdGeneratorCpp1998

namespace AG85{
namespace Cppframebrary{
namespace Corelibrary1{
namespace CppVersion1998{

    template <typename IdType>
    class IncrementalIdGenerator{
    
    public:

        IncrementalIdGenerator(IdType prestartingValue)
            :incrementalId(prestartingValue)
        {}

        IdType GetNextId(){
            return ++incrementalId;
        }
        
    private:
    
        IdType incrementalId;

    }; //class Incrementalidentificatorsgenerator

} //namespace CppVersion1998
} //namespace Corelibrary1
} //namespace Cppframebrary
} //namespace AG19850316

#endif //AFCLII98_1_HPP - AG19850316CppframebraryPartCorelibrary1IncrementalIdGeneratorCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
