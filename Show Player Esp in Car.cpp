int curVehicle = Memory::iGet(Offsets::localPawn + 0x8e8);
							 if (!curVehicle != 0)
							 {
 
								 Offsets::localPawn= pda.Address;
				 			 }
 
					if (pda.Address == Offsets::localPawn || pda.Address == Offsets::uMyObject)
					{
					 
						Offsets::myTeamID = pda.TeamID;
						Offsets::myplayeradd = Offsets::entityAddv;
						Offsets::mypos = pda.Position;
						continue;
					}