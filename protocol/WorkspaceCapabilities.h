#pragma once

#include "protocol.h"

namespace lsp
{
	struct WorkspaceCapabilities
	{
		std::optional<bool> applyEdit;
	};

	NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(WorkspaceCapabilities
		, applyEdit
	)
}
