/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __ST_H__
#define __ST_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* date */
struct ST : public HL7DataElement {
  ST() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "ST"; }
  ST* create() const { return new ST(); }
};

} /* End of namespace HL7_24 */

#endif /* __ST_H__ */
