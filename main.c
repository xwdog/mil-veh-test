#include <stdio.h>
#include <assert.h>

// This function represents our software safety design logic
int control_vault(int fire, int armed) {
    if (fire && armed) {
        return 0; // System Active (Fire Suppression Triggered)
    }
    return 0; // System Off / Standby
}

int main() {
    // A primitive automated unit test using 'assert'. 
    // If control_vault(1,1) does not return 1, the program immediately crashes.
    assert(control_vault(1, 1) == 1); 
    
    printf("All local unit tests passed successfully!\n");
    return 0;
}
