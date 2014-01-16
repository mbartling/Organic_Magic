/*
 * magic.h
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */

#ifndef MAGIC_H_
#define MAGIC_H_

#include "my_debug.h"

/**
 * Magic classes
 */
enum
{
  spell_e,  //!< spell_e
  rune_e,   //!< rune_e
  enchant_e,//!< enchant_e
  legend_e,  //!< legend_e
  magic_class_null
};

/**
 * Base Element types
 */
enum
{
  void_e,        //!< void_e
  earth_e,       //!< earth_e
  wind_e,        //!< wind_e
  fire_e,        //!< fire_e
  spirit_e,      //!< spirit_e
  water_e,       //!< water_e
  base_elem_end_e,//!< base_elem_end_e used for quick and easy bound checks
  base_elem_null
};

/**
 * energy classes
 * There are "no" attack spells, only spells focused on the enemy.
 * Spells will be built from these type.
 */

enum
{
  collect_e,//!< collect_e collect or condense energy
  expand_e, //!< expand_e expand energy
  siphon_e, //!< siphon_e forcefully take energy from something
  inherit_e,//!< inherit_e inherit energy from something
  supply_e, //!< supply_e forcefully apply energy to something
  limiter_e,//!< limiter_e limit the flow of energy
  split_e,  //!< split_e split the flow of energy
  combine,  //!< combine combine types of energy
  direct_e,  //!< direct_e direct energy
  energy_class_end_e, //!< energy_class_end_e used for quick and easy bound checks
  energy_class_null
};

class Magic
{
protected:
  int _base_element;
  int _magic_class;
public:
//  /**
//   *
//   * @param base_element
//   * @return 0 if successful -1 if invlid input
//   */
//  virtual int Magic(int base_element );
//  Magic()
//{
//    _base_element = base_elem_null;
//    _magic_class  = magic_class_null;
//}

  int
  getBaseElement() const
  {
    return _base_element;
  }

  int
  getMagicClass() const
  {
    return _magic_class;
  }
};

//==============================================
/**
 * Simple spell is a single-element single-typed magic that can be used to build other spells
 */
class SimpleSpell: public Magic
{

private:
  int _energy_class;
  float _strength;

public:
  SimpleSpell(int base_element, int energy_class, float strength); //Can only set the simple spell type at initialization

};

#endif /* MAGIC_H_ */
