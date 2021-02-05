// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class UE4HoloSample : ModuleRules
{
    private string WinrtIncPath
    {
        get
        {
            string ModulePath = Path.GetDirectoryName(
                RulesCompiler.GetFileNameFromType(this.GetType()));

            // Third party directory is at the project root,
            // which is two directories up from the game .exe (Binaries/HoloLens)
            return Path.GetFullPath(
                Path.Combine(ModulePath,
                    "../../ThirdParty/HoloLensWinrtDLL"));
        }
    }

    public UE4HoloSample(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });


        // This is the directory the DLL's include header is in.
        PublicIncludePaths.Add(WinrtIncPath);

        // The code in HoloLensWinrtDLL will only work in a Windows Store app.
        // Only link these binaries for HoloLens.
        // Similar code can be written for desktop and similarly linked 
        // to use the same features when using Holographic Remoting.
        if (Target.Platform == UnrealTargetPlatform.HoloLens)
        {
            // Link the lib
            PublicAdditionalLibraries.Add(Path.Combine(
                WinrtIncPath, "ARM64", "Release", "HoloLensWinrtDLL", "HoloLensWinrtDLL.lib"));

            string winrtDLL = "HoloLensWinrtDLL.dll";
            // Mark the dll to be DelayLoaded
            PublicDelayLoadDLLs.Add(winrtDLL);
            // RuntimeDependencies are included in packaged builds.
            RuntimeDependencies.Add(Path.Combine(WinrtIncPath,
                "ARM64", "Release", "HoloLensWinrtDLL", winrtDLL));
        }


        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
