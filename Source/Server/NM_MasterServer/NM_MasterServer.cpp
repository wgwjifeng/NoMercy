#include "main.h"

#include "../../Client/NM_Engine/NM_Index.h"
#ifdef _DEBUG
	#pragma comment(lib, "../../Bin/Debug/NM_Engine.lib")
#else
	#pragma comment(lib, "../../Bin/Release/NM_Engine.lib")
#endif

#define NM_MASTER_SERVER_PORT 1881

int main()
{
	auto nmCommon = std::make_unique<CNoMercy>();
	if (!nmCommon || !nmCommon.get())
	{
		printf("NoMercy class can NOT created! Last error: %u\n", GetLastError());
		return EXIT_FAILURE;
	}

	nmCommon->InitMasterServer(NM_MASTER_SERVER_PORT);

	printf(" # COMPLETED! # \n");

	while (1) Sleep(1000);

	return EXIT_SUCCESS;
}

