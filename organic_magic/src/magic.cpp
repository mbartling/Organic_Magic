/*
 * magic.cpp
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */

#include "magic.h"

SimpleSpell::SimpleSpell(int base_element, int energy_class, float strength)
{
  if(base_element < base_elem_end_e)
    _base_element = base_element;
  else
    {
      _base_element = void_e;
      MAGIC_PRINTF("ERR: invalid base element!\n");
    }

  if( energy_class <  energy_class_end_e )
    {
      _binding_class = energy_class;
    }
  else
    {
      _binding_class = collect_e;
      MAGIC_PRINTF("ERR: invalid energy class!\n");
    }

  _strength = strength;
}
