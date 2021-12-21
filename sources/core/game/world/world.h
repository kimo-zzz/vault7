#pragma once
#include <memory>

#include <core/game/manager/manager.h>
#include <core/game/game_objects/attackable_units/player.h>
#include <core/game/Offsets.h>


namespace game
{
	class World
	{
	public:
		World();

		ManagerTemplateAccessor<AttackableUnit> GetAttackableUnits() const;
		ManagerTemplateAccessor<Hero> GetHeroes() const;
		ManagerTemplateAccessor<Minion> GetMinions() const;
		ManagerTemplateAccessor<Turret> GetTurrets() const;
		ManagerTemplateAccessor<Inhibitor> GetInhibitors() const;
		ManagerTemplateAccessor<Building> GetBuildings() const;
		ManagerTemplateAccessor<GameObject> GetShops() const;

		Player* GetPlayer() const;

	private:
		ManagerTemplateAccessor<AttackableUnit> attackable_units_;
		ManagerTemplateAccessor<Hero>  heroes_;
		ManagerTemplateAccessor<Minion> minions_;
		ManagerTemplateAccessor<Turret> turrets_;
		ManagerTemplateAccessor<Inhibitor> inhibitors_;
		ManagerTemplateAccessor<Building> buildings_;
		ManagerTemplateAccessor<GameObject> shops_;

		Player* player_;
	};
}
