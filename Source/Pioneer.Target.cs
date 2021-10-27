using UnrealBuildTool;
using System.Collections.Generic;

public class PioneerTarget : TargetRules
{
	public PioneerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Pioneer" } );
	}
}
