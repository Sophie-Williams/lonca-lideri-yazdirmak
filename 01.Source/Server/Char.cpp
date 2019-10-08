//Arat:
if (GetGuild() != NULL)

//Kod bloğunu tamamen değiştir:
if (GetGuild() != NULL)
{	
	addPacket.dwGuildID = GetGuild()->GetID();
	CGuild* pGuild = this->GetGuild();
	if (pGuild->GetMasterPID() == GetPlayerID())
		addPacket.dwNewIsGuildName = 3;

	else if (pGuild->NewIsGuildGeneral(GetPlayerID()) == true)
		addPacket.dwNewIsGuildName = 2;

	else
		addPacket.dwNewIsGuildName = 1;
}
else
{
	addPacket.dwGuildID = 0;
	addPacket.dwNewIsGuildName = 0;
}

//Arat:
pack.dwMountVnum	= GetMountVnum();

//Altına ekle:
	CGuild* pGuild = this->GetGuild();
	if (pGuild)
	{
		if (pGuild->GetMasterPID() == GetPlayerID())
			pack.dwNewIsGuildName = 3;
		else if (pGuild->NewIsGuildGeneral(GetPlayerID()) == true)
			pack.dwNewIsGuildName = 2;
		else
			pack.dwNewIsGuildName = 1;
	}
	else
	{
		pack.dwNewIsGuildName = 0;
	}