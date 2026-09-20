#pragma once

#include "data/SceneTransform.h"

namespace gui {

enum class SnapshotCoordinates { ZUp, YUp, SuperSplat };

inline const char* snapshot_coordinates_name(SnapshotCoordinates coordinates) {
    switch (coordinates) {
        case SnapshotCoordinates::YUp: return "y-up";
        case SnapshotCoordinates::SuperSplat: return "supersplat";
        default: return "z-up";
    }
}

struct SnapshotExport {
    spirula::SceneTransform transform;
    SnapshotCoordinates coordinates = SnapshotCoordinates::ZUp;
};

}  // namespace gui
