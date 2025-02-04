using System.Diagnostics;
using System.Runtime.InteropServices;

using Serilog;

namespace Dalamud.Support;

/// <summary>Tracks the loaded process modules.</summary>
internal static unsafe partial class CurrentProcessModules
{
    private static Process? process;

    /// <summary>Gets all the loaded modules, up to date.</summary>
    public static ProcessModuleCollection ModuleCollection
    {
        get
        {
            ref var t = ref *GetDllChangedStorage();
            if (t != 0)
            {
                t = 0;
                process = null;
                Log.Verbose("{what}: Fetchling fresh copy of current process modules.", nameof(CurrentProcessModules));
            }

            return (process ??= Process.GetCurrentProcess()).Modules;
        }
    }

    [LibraryImport("Dalamud.Boot.dll")]
    private static partial int* GetDllChangedStorage();
}
