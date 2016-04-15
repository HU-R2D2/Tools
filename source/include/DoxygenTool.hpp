////
// \project Roborescue
// \package r2d2
//
// \file DoxygenTool.hpp
// \date Created: 08-04-16
// \version <0.0.0>
//
// \author Matthijs Mud 1657223
//
// \section LICENSE
// License: newBSD
//
// Copyright � 2016, HU University of Applied Sciences Utrecht.
// All rights reserved.
//
// Redistribution and use in source and binary forms,
// with or without modification, are permitted provided that
// the following conditions are met:
// - Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// - Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// - Neither the name of the HU University of Applied Sciences Utrecht
//   nor the names of its contributors may be used to endorse or promote
//   products derived from this software without specific prior written
//   permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
// BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE HU UNIVERSITY OF APPLIED SCIENCES UTRECHT
// BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
////
#ifndef HEADERTOOL_HPP
#define HEADERTOOL_HPP

#include <iostream>
#include <vector>

namespace r2d2 {
    class DoxygenTool final {
    private:
        std::string get_annotated(const std::string &file,
                                  const std::string &annotation) const;

    public:
        std::string get_comment_block(const std::string & file) const;
        std::vector<std::string> get_comment_blocks(const std::string &file) const;
        std::vector<std::string> get_authors(const std::string & file) const;

        //! @brief
        //!
        //!
        std::string get_author(const std::string &file) const;

        std::string get_date(const std::string &section) const;

        std::string get_version(const std::string &section) const;

        //! @brief Gets a block of Doxygen comment(s).
        //!
        //! A
        std::string get_block(const std::string & file) const;

        //! @brief Gets all doxygen comments in the specified file.
        std::vector<std::string> get_blocks(const std::string& file) const;
        DoxygenTool();
    };
}

#endif //HEADERTEST_HPP
