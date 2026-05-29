// LaVista: A Modern Platform for C++ Desktop Apps.
//
// Copyright (C) 2026 I-A-S (ias@iasoft.dev)
// Copyright (C) 2026 IASoft (PVT) LTD (contact@iasoft.dev)
//
// This source code is licensed under the PolyForm Noncommercial License 1.0.0.
// A copy of this license is included in the LICENSE file at the root of this project,
// and is also available at <https://polyformproject.org/licenses/noncommercial/1.0.0>.

export module lavista.definitions;

export import auxid;

export namespace LaVista
{
  using namespace au;

  using Window = void *;

  struct DisplayInfo
  {
    i32 index{-1};
    i32 width{-1};
    i32 height{-1};
    i32 x{-1};
    i32 y{-1};
  };

  struct WindowCreateOptions
  {
    String title{"LaVista App"};
    String spa_bundle_path{""};
    String icon_path{""};

    i32 width{800};
    i32 height{600};
    i32 x{-1};
    i32 y{-1};

    i32 display_index{-1};
  };

  struct WindowDragStripOptions
  {
    f32 start_x_percentage{0.0f};
    f32 start_y_percentage{0.0f};
    f32 end_x_percentage{100.0f};
    f32 end_y_percentage{5.0f};

    i32 start_x_px{-1};
    i32 start_y_px{-1};
    i32 end_x_px{-1};
    i32 end_y_px{-1};
  };
} // namespace LaVista
