/*
---------------------------------------------------------------------------------------
This source file is part of SWG:ANH (Star Wars Galaxies - A New Hope - Server Emulator)

For more information, visit http://www.swganh.com

Copyright (c) 2006 - 2014 The SWG:ANH Team
---------------------------------------------------------------------------------------
Use of this source code is governed by the GPL v3 license that can be found
in the COPYING file or at http://www.gnu.org/licenses/gpl-3.0.html

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_COMBATMANAGER_H
#define ANH_ZONESERVER_COMBATMANAGER_H

#define gCombatManager	CombatManager::getSingletonPtr()

#include "Utils/bstring.h"
#include "Utils/typedefs.h"
#include "DatabaseManager/DatabaseCallback.h"


//=========================================================================================

namespace swganh {
namespace database{
class Database;
class DatabaseCallback;
class DatabaseResult;
}}

class Weapon;
class CreatureObject;
class CMWeaponGroup;
class ObjectControllerCmdProperties;

typedef	std::vector<CMWeaponGroup*>	WeaponGroups;

//=========================================================================================

class CombatManager : public swganh::database::DatabaseCallback
{
public:

    static CombatManager*	Init(swganh::database::Database* database);
    static CombatManager*	getSingletonPtr() {
        return mSingleton;
    }

    void					handleDatabaseJobComplete(void* ref,swganh::database::DatabaseResult* result);

    uint32					getDefaultAttackAnimation(uint32 weaponGroup);
    BString					getDefaultSpam(uint32 weaponGroup);

    bool					handleAttack(CreatureObject*  attacker,uint64 targetId,ObjectControllerCmdProperties* cmdProperties);

    ~CombatManager();

private:

    CombatManager(swganh::database::Database* database);

    // bool					_verifyCombatState(CreatureObject* attacker,CreatureObject* defender);
    bool					_verifyCombatState(CreatureObject* attacker, uint64 defenderId);

    uint8					_executeAttack(CreatureObject* attacker,CreatureObject* defender,ObjectControllerCmdProperties *cmdProperties,Weapon* weapon);
    uint8					_hitCheck(CreatureObject* attacker,CreatureObject* defender,ObjectControllerCmdProperties *cmdProperties,Weapon* weapon);
    int32					_mitigateDamage(CreatureObject* attacker,CreatureObject* defender,ObjectControllerCmdProperties *cmdProperties,int32 oldDamage,Weapon* weapon);
    uint8					_tryStateEffects(CreatureObject* attacker,CreatureObject* defender,ObjectControllerCmdProperties *cmdProperties,Weapon* weapon);

    static bool				mInsFlag;
    static CombatManager*	mSingleton;
    swganh::database::Database*				mDatabase;
    WeaponGroups			mWeaponGroups;
};

//=========================================================================================

#endif


