
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Frame_Create(AOwner: TComponent): TFrame; extdecl;
begin
  Result :=  TFrame.Create(AOwner);
end;

procedure Frame_Free(AObj: TFrame); extdecl;
begin
  AObj.Free;
end;

procedure Frame_ScrollInView(AObj: TFrame; AControl: TControl); extdecl;
begin
  AObj.ScrollInView(AControl);
end;

function Frame_CanFocus(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function Frame_ContainsControl(AObj: TFrame; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function Frame_ControlAtPos(AObj: TFrame; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure Frame_DisableAlign(AObj: TFrame); extdecl;
begin
  AObj.DisableAlign;
end;

procedure Frame_EnableAlign(AObj: TFrame); extdecl;
begin
  AObj.EnableAlign;
end;

function Frame_FindChildControl(AObj: TFrame; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure Frame_FlipChildren(AObj: TFrame; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Frame_Focused(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function Frame_HandleAllocated(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Frame_InsertControl(AObj: TFrame; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure Frame_Invalidate(AObj: TFrame); extdecl;
begin
  AObj.Invalidate;
end;

procedure Frame_RemoveControl(AObj: TFrame; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure Frame_Realign(AObj: TFrame); extdecl;
begin
  AObj.Realign;
end;

procedure Frame_Repaint(AObj: TFrame); extdecl;
begin
  AObj.Repaint;
end;

procedure Frame_ScaleBy(AObj: TFrame; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Frame_ScrollBy(AObj: TFrame; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure Frame_SetBounds(AObj: TFrame; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Frame_SetFocus(AObj: TFrame); extdecl;
begin
  AObj.SetFocus;
end;

procedure Frame_Update(AObj: TFrame); extdecl;
begin
  AObj.Update;
end;

procedure Frame_BringToFront(AObj: TFrame); extdecl;
begin
  AObj.BringToFront;
end;

procedure Frame_ClientToScreen(AObj: TFrame; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Frame_ClientToParent(AObj: TFrame; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Frame_Dragging(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function Frame_HasParent(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Frame_Hide(AObj: TFrame); extdecl;
begin
  AObj.Hide;
end;

function Frame_Perform(AObj: TFrame; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Frame_Refresh(AObj: TFrame); extdecl;
begin
  AObj.Refresh;
end;

procedure Frame_ScreenToClient(AObj: TFrame; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Frame_ParentToClient(AObj: TFrame; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Frame_SendToBack(AObj: TFrame); extdecl;
begin
  AObj.SendToBack;
end;

procedure Frame_Show(AObj: TFrame); extdecl;
begin
  AObj.Show;
end;

function Frame_GetTextBuf(AObj: TFrame; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Frame_GetTextLen(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Frame_SetTextBuf(AObj: TFrame; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function Frame_FindComponent(AObj: TFrame; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Frame_GetNamePath(AObj: TFrame): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Frame_Assign(AObj: TFrame; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Frame_ClassType(AObj: TFrame): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Frame_ClassName(AObj: TFrame): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Frame_InstanceSize(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Frame_InheritsFrom(AObj: TFrame; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Frame_Equals(AObj: TFrame; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Frame_GetHashCode(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Frame_ToString(AObj: TFrame): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Frame_GetAlign(AObj: TFrame): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure Frame_SetAlign(AObj: TFrame; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function Frame_GetAnchors(AObj: TFrame): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Frame_SetAnchors(AObj: TFrame; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function Frame_GetAutoScroll(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.AutoScroll;
end;

procedure Frame_SetAutoScroll(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.AutoScroll := AValue;
end;

function Frame_GetAutoSize(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Frame_SetAutoSize(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function Frame_GetBiDiMode(AObj: TFrame): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Frame_SetBiDiMode(AObj: TFrame; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Frame_GetConstraints(AObj: TFrame): TSizeConstraints; extdecl;
begin
  Result :=  AObj.Constraints;
end;

procedure Frame_SetConstraints(AObj: TFrame; AValue: TSizeConstraints); extdecl;
begin
  AObj.Constraints := AValue;
end;

function Frame_GetDockSite(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure Frame_SetDockSite(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function Frame_GetDoubleBuffered(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Frame_SetDoubleBuffered(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Frame_GetDragCursor(AObj: TFrame): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure Frame_SetDragCursor(AObj: TFrame; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function Frame_GetDragKind(AObj: TFrame): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure Frame_SetDragKind(AObj: TFrame; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function Frame_GetDragMode(AObj: TFrame): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure Frame_SetDragMode(AObj: TFrame; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function Frame_GetEnabled(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Frame_SetEnabled(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function Frame_GetColor(AObj: TFrame): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure Frame_SetColor(AObj: TFrame; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function Frame_GetFont(AObj: TFrame): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure Frame_SetFont(AObj: TFrame; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function Frame_GetParentColor(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Frame_SetParentColor(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function Frame_GetParentDoubleBuffered(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure Frame_SetParentDoubleBuffered(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function Frame_GetParentFont(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Frame_SetParentFont(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function Frame_GetParentShowHint(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Frame_SetParentShowHint(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Frame_GetPopupMenu(AObj: TFrame): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Frame_SetPopupMenu(AObj: TFrame; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Frame_GetShowHint(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Frame_SetShowHint(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function Frame_GetTabOrder(AObj: TFrame): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Frame_SetTabOrder(AObj: TFrame; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function Frame_GetTabStop(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Frame_SetTabStop(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function Frame_GetVisible(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Frame_SetVisible(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure Frame_SetOnClick(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure Frame_SetOnContextPopup(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure Frame_SetOnDblClick(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure Frame_SetOnDockDrop(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDockDrop}
  {$DEFINE EventMethodName := OnDockDrop}
  EventMethodCode
end;

procedure Frame_SetOnDragDrop(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure Frame_SetOnDragOver(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure Frame_SetOnEndDock(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure Frame_SetOnEndDrag(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure Frame_SetOnEnter(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure Frame_SetOnExit(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure Frame_SetOnGetSiteInfo(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetSiteInfo}
  {$DEFINE EventMethodName := OnGetSiteInfo}
  EventMethodCode
end;

procedure Frame_SetOnMouseDown(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure Frame_SetOnMouseEnter(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure Frame_SetOnMouseLeave(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure Frame_SetOnMouseMove(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure Frame_SetOnMouseUp(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure Frame_SetOnMouseWheel(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheel}
  {$DEFINE EventMethodName := OnMouseWheel}
  EventMethodCode
end;

procedure Frame_SetOnMouseWheelDown(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelDown}
  {$DEFINE EventMethodName := OnMouseWheelDown}
  EventMethodCode
end;

procedure Frame_SetOnMouseWheelUp(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelUp}
  {$DEFINE EventMethodName := OnMouseWheelUp}
  EventMethodCode
end;

procedure Frame_SetOnResize(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure Frame_SetOnStartDock(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure Frame_SetOnUnDock(AObj: TFrame; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnUnDock}
  {$DEFINE EventMethodName := OnUnDock}
  EventMethodCode
end;

function Frame_GetHorzScrollBar(AObj: TFrame): TControlScrollBar; extdecl;
begin
  Result :=  AObj.HorzScrollBar;
end;

procedure Frame_SetHorzScrollBar(AObj: TFrame; AValue: TControlScrollBar); extdecl;
begin
  AObj.HorzScrollBar := AValue;
end;

function Frame_GetVertScrollBar(AObj: TFrame): TControlScrollBar; extdecl;
begin
  Result :=  AObj.VertScrollBar;
end;

procedure Frame_SetVertScrollBar(AObj: TFrame; AValue: TControlScrollBar); extdecl;
begin
  AObj.VertScrollBar := AValue;
end;

function Frame_GetDockClientCount(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function Frame_GetMouseInClient(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function Frame_GetVisibleDockClientCount(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function Frame_GetBrush(AObj: TFrame): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function Frame_GetControlCount(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Frame_GetHandle(AObj: TFrame): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function Frame_GetParentWindow(AObj: TFrame): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Frame_SetParentWindow(AObj: TFrame; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Frame_GetUseDockManager(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Frame_SetUseDockManager(AObj: TFrame; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function Frame_GetAction(AObj: TFrame): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure Frame_SetAction(AObj: TFrame; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure Frame_GetBoundsRect(AObj: TFrame; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Frame_SetBoundsRect(AObj: TFrame; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Frame_GetClientHeight(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Frame_SetClientHeight(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Frame_GetClientOrigin(AObj: TFrame; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Frame_GetClientRect(AObj: TFrame; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Frame_GetClientWidth(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Frame_SetClientWidth(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Frame_GetControlState(AObj: TFrame): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure Frame_SetControlState(AObj: TFrame; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function Frame_GetControlStyle(AObj: TFrame): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Frame_SetControlStyle(AObj: TFrame; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function Frame_GetFloating(AObj: TFrame): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function Frame_GetParent(AObj: TFrame): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Frame_SetParent(AObj: TFrame; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function Frame_GetLeft(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure Frame_SetLeft(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function Frame_GetTop(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure Frame_SetTop(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function Frame_GetWidth(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure Frame_SetWidth(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function Frame_GetHeight(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure Frame_SetHeight(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function Frame_GetCursor(AObj: TFrame): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Frame_SetCursor(AObj: TFrame; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function Frame_GetHint(AObj: TFrame): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Frame_SetHint(AObj: TFrame; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function Frame_GetComponentCount(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Frame_GetComponentIndex(AObj: TFrame): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Frame_SetComponentIndex(AObj: TFrame; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Frame_GetOwner(AObj: TFrame): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function Frame_GetName(AObj: TFrame): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Frame_SetName(AObj: TFrame; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function Frame_GetTag(AObj: TFrame): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Frame_SetTag(AObj: TFrame; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function Frame_GetDockClients(AObj: TFrame; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function Frame_GetControls(AObj: TFrame; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Frame_GetComponents(AObj: TFrame; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function Frame_GetMargins(AObj: TFrame): TControlBorderSpacing; extdecl;
begin
  Result := AObj.BorderSpacing;
end;

procedure Frame_SetMargins(AObj: TFrame; AValue: TControlBorderSpacing); extdecl;
begin
  AObj.BorderSpacing := AValue;
end;

function Frame_StaticClassType: TClass; extdecl;
begin
  Result := TFrame;
end;

exports
  Frame_Create,
  Frame_Free,
  Frame_ScrollInView,
  Frame_CanFocus,
  Frame_ContainsControl,
  Frame_ControlAtPos,
  Frame_DisableAlign,
  Frame_EnableAlign,
  Frame_FindChildControl,
  Frame_FlipChildren,
  Frame_Focused,
  Frame_HandleAllocated,
  Frame_InsertControl,
  Frame_Invalidate,
  Frame_RemoveControl,
  Frame_Realign,
  Frame_Repaint,
  Frame_ScaleBy,
  Frame_ScrollBy,
  Frame_SetBounds,
  Frame_SetFocus,
  Frame_Update,
  Frame_BringToFront,
  Frame_ClientToScreen,
  Frame_ClientToParent,
  Frame_Dragging,
  Frame_HasParent,
  Frame_Hide,
  Frame_Perform,
  Frame_Refresh,
  Frame_ScreenToClient,
  Frame_ParentToClient,
  Frame_SendToBack,
  Frame_Show,
  Frame_GetTextBuf,
  Frame_GetTextLen,
  Frame_SetTextBuf,
  Frame_FindComponent,
  Frame_GetNamePath,
  Frame_Assign,
  Frame_ClassType,
  Frame_ClassName,
  Frame_InstanceSize,
  Frame_InheritsFrom,
  Frame_Equals,
  Frame_GetHashCode,
  Frame_ToString,
  Frame_GetAlign,
  Frame_SetAlign,
  Frame_GetAnchors,
  Frame_SetAnchors,
  Frame_GetAutoScroll,
  Frame_SetAutoScroll,
  Frame_GetAutoSize,
  Frame_SetAutoSize,
  Frame_GetBiDiMode,
  Frame_SetBiDiMode,
  Frame_GetConstraints,
  Frame_SetConstraints,
  Frame_GetDockSite,
  Frame_SetDockSite,
  Frame_GetDoubleBuffered,
  Frame_SetDoubleBuffered,
  Frame_GetDragCursor,
  Frame_SetDragCursor,
  Frame_GetDragKind,
  Frame_SetDragKind,
  Frame_GetDragMode,
  Frame_SetDragMode,
  Frame_GetEnabled,
  Frame_SetEnabled,
  Frame_GetColor,
  Frame_SetColor,
  Frame_GetFont,
  Frame_SetFont,
  Frame_GetParentColor,
  Frame_SetParentColor,
  Frame_GetParentDoubleBuffered,
  Frame_SetParentDoubleBuffered,
  Frame_GetParentFont,
  Frame_SetParentFont,
  Frame_GetParentShowHint,
  Frame_SetParentShowHint,
  Frame_GetPopupMenu,
  Frame_SetPopupMenu,
  Frame_GetShowHint,
  Frame_SetShowHint,
  Frame_GetTabOrder,
  Frame_SetTabOrder,
  Frame_GetTabStop,
  Frame_SetTabStop,
  Frame_GetVisible,
  Frame_SetVisible,
  Frame_SetOnClick,
  Frame_SetOnContextPopup,
  Frame_SetOnDblClick,
  Frame_SetOnDockDrop,
  Frame_SetOnDragDrop,
  Frame_SetOnDragOver,
  Frame_SetOnEndDock,
  Frame_SetOnEndDrag,
  Frame_SetOnEnter,
  Frame_SetOnExit,
  Frame_SetOnGetSiteInfo,
  Frame_SetOnMouseDown,
  Frame_SetOnMouseEnter,
  Frame_SetOnMouseLeave,
  Frame_SetOnMouseMove,
  Frame_SetOnMouseUp,
  Frame_SetOnMouseWheel,
  Frame_SetOnMouseWheelDown,
  Frame_SetOnMouseWheelUp,
  Frame_SetOnResize,
  Frame_SetOnStartDock,
  Frame_SetOnUnDock,
  Frame_GetHorzScrollBar,
  Frame_SetHorzScrollBar,
  Frame_GetVertScrollBar,
  Frame_SetVertScrollBar,
  Frame_GetDockClientCount,
  Frame_GetMouseInClient,
  Frame_GetVisibleDockClientCount,
  Frame_GetBrush,
  Frame_GetControlCount,
  Frame_GetHandle,
  Frame_GetParentWindow,
  Frame_SetParentWindow,
  Frame_GetUseDockManager,
  Frame_SetUseDockManager,
  Frame_GetAction,
  Frame_SetAction,
  Frame_GetBoundsRect,
  Frame_SetBoundsRect,
  Frame_GetClientHeight,
  Frame_SetClientHeight,
  Frame_GetClientOrigin,
  Frame_GetClientRect,
  Frame_GetClientWidth,
  Frame_SetClientWidth,
  Frame_GetControlState,
  Frame_SetControlState,
  Frame_GetControlStyle,
  Frame_SetControlStyle,
  Frame_GetFloating,
  Frame_GetParent,
  Frame_SetParent,
  Frame_GetLeft,
  Frame_SetLeft,
  Frame_GetTop,
  Frame_SetTop,
  Frame_GetWidth,
  Frame_SetWidth,
  Frame_GetHeight,
  Frame_SetHeight,
  Frame_GetCursor,
  Frame_SetCursor,
  Frame_GetHint,
  Frame_SetHint,
  Frame_GetComponentCount,
  Frame_GetComponentIndex,
  Frame_SetComponentIndex,
  Frame_GetOwner,
  Frame_GetName,
  Frame_SetName,
  Frame_GetTag,
  Frame_SetTag,
  Frame_GetDockClients,
  Frame_GetControls,
  Frame_GetComponents,
  Frame_StaticClassType,
  Frame_GetMargins,
  Frame_SetMargins;

