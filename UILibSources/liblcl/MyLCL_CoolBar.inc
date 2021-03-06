
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function CoolBar_Create(AOwner: TComponent): TCoolBar; extdecl;
begin
  Result :=  TCoolBar.Create(AOwner);
end;

procedure CoolBar_Free(AObj: TCoolBar); extdecl;
begin
  AObj.Free;
end;

procedure CoolBar_FlipChildren(AObj: TCoolBar; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function CoolBar_CanFocus(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function CoolBar_ContainsControl(AObj: TCoolBar; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function CoolBar_ControlAtPos(AObj: TCoolBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure CoolBar_DisableAlign(AObj: TCoolBar); extdecl;
begin
  AObj.DisableAlign;
end;

procedure CoolBar_EnableAlign(AObj: TCoolBar); extdecl;
begin
  AObj.EnableAlign;
end;

function CoolBar_FindChildControl(AObj: TCoolBar; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

function CoolBar_Focused(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function CoolBar_HandleAllocated(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure CoolBar_Invalidate(AObj: TCoolBar); extdecl;
begin
  AObj.Invalidate;
end;

procedure CoolBar_RemoveControl(AObj: TCoolBar; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure CoolBar_Realign(AObj: TCoolBar); extdecl;
begin
  AObj.Realign;
end;

procedure CoolBar_Repaint(AObj: TCoolBar); extdecl;
begin
  AObj.Repaint;
end;

procedure CoolBar_ScaleBy(AObj: TCoolBar; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure CoolBar_ScrollBy(AObj: TCoolBar; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure CoolBar_SetBounds(AObj: TCoolBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure CoolBar_SetFocus(AObj: TCoolBar); extdecl;
begin
  AObj.SetFocus;
end;

procedure CoolBar_Update(AObj: TCoolBar); extdecl;
begin
  AObj.Update;
end;

procedure CoolBar_BringToFront(AObj: TCoolBar); extdecl;
begin
  AObj.BringToFront;
end;

procedure CoolBar_ClientToScreen(AObj: TCoolBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure CoolBar_ClientToParent(AObj: TCoolBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function CoolBar_Dragging(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function CoolBar_HasParent(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure CoolBar_Hide(AObj: TCoolBar); extdecl;
begin
  AObj.Hide;
end;

function CoolBar_Perform(AObj: TCoolBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure CoolBar_Refresh(AObj: TCoolBar); extdecl;
begin
  AObj.Refresh;
end;

procedure CoolBar_ScreenToClient(AObj: TCoolBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure CoolBar_ParentToClient(AObj: TCoolBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure CoolBar_SendToBack(AObj: TCoolBar); extdecl;
begin
  AObj.SendToBack;
end;

procedure CoolBar_Show(AObj: TCoolBar); extdecl;
begin
  AObj.Show;
end;

function CoolBar_GetTextBuf(AObj: TCoolBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function CoolBar_GetTextLen(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure CoolBar_SetTextBuf(AObj: TCoolBar; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function CoolBar_FindComponent(AObj: TCoolBar; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function CoolBar_GetNamePath(AObj: TCoolBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure CoolBar_Assign(AObj: TCoolBar; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function CoolBar_ClassType(AObj: TCoolBar): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function CoolBar_ClassName(AObj: TCoolBar): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function CoolBar_InstanceSize(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function CoolBar_InheritsFrom(AObj: TCoolBar; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function CoolBar_Equals(AObj: TCoolBar; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CoolBar_GetHashCode(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CoolBar_ToString(AObj: TCoolBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function CoolBar_GetAlign(AObj: TCoolBar): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure CoolBar_SetAlign(AObj: TCoolBar; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function CoolBar_GetAnchors(AObj: TCoolBar): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure CoolBar_SetAnchors(AObj: TCoolBar; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function CoolBar_GetAutoSize(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure CoolBar_SetAutoSize(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function CoolBar_GetBandBorderStyle(AObj: TCoolBar): TBorderStyle; extdecl;
begin
  Result :=  AObj.BandBorderStyle;
end;

procedure CoolBar_SetBandBorderStyle(AObj: TCoolBar; AValue: TBorderStyle); extdecl;
begin
  AObj.BandBorderStyle := AValue;
end;

function CoolBar_GetBandMaximize(AObj: TCoolBar): TCoolBandMaximize; extdecl;
begin
  Result :=  AObj.BandMaximize;
end;

procedure CoolBar_SetBandMaximize(AObj: TCoolBar; AValue: TCoolBandMaximize); extdecl;
begin
  AObj.BandMaximize := AValue;
end;

function CoolBar_GetBands(AObj: TCoolBar): TCoolBands; extdecl;
begin
  Result :=  AObj.Bands;
end;

procedure CoolBar_SetBands(AObj: TCoolBar; AValue: TCoolBands); extdecl;
begin
  AObj.Bands := AValue;
end;

function CoolBar_GetBorderWidth(AObj: TCoolBar): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure CoolBar_SetBorderWidth(AObj: TCoolBar; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function CoolBar_GetColor(AObj: TCoolBar): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure CoolBar_SetColor(AObj: TCoolBar; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function CoolBar_GetConstraints(AObj: TCoolBar): TSizeConstraints; extdecl;
begin
  Result :=  AObj.Constraints;
end;

procedure CoolBar_SetConstraints(AObj: TCoolBar; AValue: TSizeConstraints); extdecl;
begin
  AObj.Constraints := AValue;
end;

function CoolBar_GetDockSite(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure CoolBar_SetDockSite(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function CoolBar_GetDoubleBuffered(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure CoolBar_SetDoubleBuffered(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function CoolBar_GetDragCursor(AObj: TCoolBar): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure CoolBar_SetDragCursor(AObj: TCoolBar; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function CoolBar_GetDragKind(AObj: TCoolBar): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure CoolBar_SetDragKind(AObj: TCoolBar; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function CoolBar_GetDragMode(AObj: TCoolBar): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure CoolBar_SetDragMode(AObj: TCoolBar; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function CoolBar_GetEdgeBorders(AObj: TCoolBar): TEdgeBorders; extdecl;
begin
  Result :=  AObj.EdgeBorders;
end;

procedure CoolBar_SetEdgeBorders(AObj: TCoolBar; AValue: TEdgeBorders); extdecl;
begin
  AObj.EdgeBorders := AValue;
end;

function CoolBar_GetEdgeInner(AObj: TCoolBar): TEdgeStyle; extdecl;
begin
  Result :=  AObj.EdgeInner;
end;

procedure CoolBar_SetEdgeInner(AObj: TCoolBar; AValue: TEdgeStyle); extdecl;
begin
  AObj.EdgeInner := AValue;
end;

function CoolBar_GetEdgeOuter(AObj: TCoolBar): TEdgeStyle; extdecl;
begin
  Result :=  AObj.EdgeOuter;
end;

procedure CoolBar_SetEdgeOuter(AObj: TCoolBar; AValue: TEdgeStyle); extdecl;
begin
  AObj.EdgeOuter := AValue;
end;

function CoolBar_GetEnabled(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure CoolBar_SetEnabled(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function CoolBar_GetFixedSize(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.FixedSize;
end;

procedure CoolBar_SetFixedSize(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.FixedSize := AValue;
end;

function CoolBar_GetFixedOrder(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.FixedOrder;
end;

procedure CoolBar_SetFixedOrder(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.FixedOrder := AValue;
end;

function CoolBar_GetFont(AObj: TCoolBar): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure CoolBar_SetFont(AObj: TCoolBar; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function CoolBar_GetImages(AObj: TCoolBar): TCustomImageList; extdecl;
begin
  Result :=  AObj.Images;
end;

procedure CoolBar_SetImages(AObj: TCoolBar; AValue: TCustomImageList); extdecl;
begin
  AObj.Images := AValue;
end;

function CoolBar_GetParentColor(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure CoolBar_SetParentColor(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function CoolBar_GetParentDoubleBuffered(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure CoolBar_SetParentDoubleBuffered(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function CoolBar_GetParentFont(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure CoolBar_SetParentFont(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function CoolBar_GetParentShowHint(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure CoolBar_SetParentShowHint(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function CoolBar_GetBitmap(AObj: TCoolBar): TBitmap; extdecl;
begin
  Result :=  AObj.Bitmap;
end;

procedure CoolBar_SetBitmap(AObj: TCoolBar; AValue: TBitmap); extdecl;
begin
  AObj.Bitmap := AValue;
end;

function CoolBar_GetPopupMenu(AObj: TCoolBar): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure CoolBar_SetPopupMenu(AObj: TCoolBar; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function CoolBar_GetShowHint(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure CoolBar_SetShowHint(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function CoolBar_GetShowText(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowText;
end;

procedure CoolBar_SetShowText(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.ShowText := AValue;
end;

function CoolBar_GetVertical(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Vertical;
end;

procedure CoolBar_SetVertical(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.Vertical := AValue;
end;

function CoolBar_GetVisible(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure CoolBar_SetVisible(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure CoolBar_SetOnChange(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := OnChange}
  EventMethodCode
end;

procedure CoolBar_SetOnClick(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure CoolBar_SetOnContextPopup(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure CoolBar_SetOnDblClick(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure CoolBar_SetOnDockDrop(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDockDrop}
  {$DEFINE EventMethodName := OnDockDrop}
  EventMethodCode
end;

procedure CoolBar_SetOnDragDrop(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure CoolBar_SetOnDragOver(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure CoolBar_SetOnEndDock(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure CoolBar_SetOnEndDrag(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure CoolBar_SetOnGetSiteInfo(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetSiteInfo}
  {$DEFINE EventMethodName := OnGetSiteInfo}
  EventMethodCode
end;

procedure CoolBar_SetOnMouseDown(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure CoolBar_SetOnMouseEnter(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure CoolBar_SetOnMouseLeave(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure CoolBar_SetOnMouseMove(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure CoolBar_SetOnMouseUp(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure CoolBar_SetOnResize(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure CoolBar_SetOnStartDock(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure CoolBar_SetOnUnDock(AObj: TCoolBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnUnDock}
  {$DEFINE EventMethodName := OnUnDock}
  EventMethodCode
end;

function CoolBar_GetDockClientCount(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function CoolBar_GetMouseInClient(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function CoolBar_GetVisibleDockClientCount(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function CoolBar_GetBrush(AObj: TCoolBar): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function CoolBar_GetControlCount(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function CoolBar_GetHandle(AObj: TCoolBar): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function CoolBar_GetParentWindow(AObj: TCoolBar): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure CoolBar_SetParentWindow(AObj: TCoolBar; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function CoolBar_GetTabOrder(AObj: TCoolBar): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure CoolBar_SetTabOrder(AObj: TCoolBar; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function CoolBar_GetTabStop(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure CoolBar_SetTabStop(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function CoolBar_GetUseDockManager(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure CoolBar_SetUseDockManager(AObj: TCoolBar; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function CoolBar_GetAction(AObj: TCoolBar): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure CoolBar_SetAction(AObj: TCoolBar; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function CoolBar_GetBiDiMode(AObj: TCoolBar): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure CoolBar_SetBiDiMode(AObj: TCoolBar; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure CoolBar_GetBoundsRect(AObj: TCoolBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure CoolBar_SetBoundsRect(AObj: TCoolBar; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function CoolBar_GetClientHeight(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure CoolBar_SetClientHeight(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure CoolBar_GetClientOrigin(AObj: TCoolBar; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure CoolBar_GetClientRect(AObj: TCoolBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function CoolBar_GetClientWidth(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure CoolBar_SetClientWidth(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function CoolBar_GetControlState(AObj: TCoolBar): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure CoolBar_SetControlState(AObj: TCoolBar; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function CoolBar_GetControlStyle(AObj: TCoolBar): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure CoolBar_SetControlStyle(AObj: TCoolBar; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function CoolBar_GetFloating(AObj: TCoolBar): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function CoolBar_GetParent(AObj: TCoolBar): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure CoolBar_SetParent(AObj: TCoolBar; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function CoolBar_GetLeft(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure CoolBar_SetLeft(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function CoolBar_GetTop(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure CoolBar_SetTop(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function CoolBar_GetWidth(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure CoolBar_SetWidth(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function CoolBar_GetHeight(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure CoolBar_SetHeight(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function CoolBar_GetCursor(AObj: TCoolBar): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure CoolBar_SetCursor(AObj: TCoolBar; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function CoolBar_GetHint(AObj: TCoolBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure CoolBar_SetHint(AObj: TCoolBar; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function CoolBar_GetComponentCount(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function CoolBar_GetComponentIndex(AObj: TCoolBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure CoolBar_SetComponentIndex(AObj: TCoolBar; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function CoolBar_GetOwner(AObj: TCoolBar): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function CoolBar_GetName(AObj: TCoolBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure CoolBar_SetName(AObj: TCoolBar; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function CoolBar_GetTag(AObj: TCoolBar): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure CoolBar_SetTag(AObj: TCoolBar; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function CoolBar_GetDockClients(AObj: TCoolBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function CoolBar_GetControls(AObj: TCoolBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function CoolBar_GetComponents(AObj: TCoolBar; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function CoolBar_GetMargins(AObj: TCoolBar): TControlBorderSpacing; extdecl;
begin
  Result := AObj.BorderSpacing;
end;

procedure CoolBar_SetMargins(AObj: TCoolBar; AValue: TControlBorderSpacing); extdecl;
begin
  AObj.BorderSpacing := AValue;
end;

function CoolBar_StaticClassType: TClass; extdecl;
begin
  Result := TCoolBar;
end;

exports
  CoolBar_Create,
  CoolBar_Free,
  CoolBar_FlipChildren,
  CoolBar_CanFocus,
  CoolBar_ContainsControl,
  CoolBar_ControlAtPos,
  CoolBar_DisableAlign,
  CoolBar_EnableAlign,
  CoolBar_FindChildControl,
  CoolBar_Focused,
  CoolBar_HandleAllocated,
  CoolBar_Invalidate,
  CoolBar_RemoveControl,
  CoolBar_Realign,
  CoolBar_Repaint,
  CoolBar_ScaleBy,
  CoolBar_ScrollBy,
  CoolBar_SetBounds,
  CoolBar_SetFocus,
  CoolBar_Update,
  CoolBar_BringToFront,
  CoolBar_ClientToScreen,
  CoolBar_ClientToParent,
  CoolBar_Dragging,
  CoolBar_HasParent,
  CoolBar_Hide,
  CoolBar_Perform,
  CoolBar_Refresh,
  CoolBar_ScreenToClient,
  CoolBar_ParentToClient,
  CoolBar_SendToBack,
  CoolBar_Show,
  CoolBar_GetTextBuf,
  CoolBar_GetTextLen,
  CoolBar_SetTextBuf,
  CoolBar_FindComponent,
  CoolBar_GetNamePath,
  CoolBar_Assign,
  CoolBar_ClassType,
  CoolBar_ClassName,
  CoolBar_InstanceSize,
  CoolBar_InheritsFrom,
  CoolBar_Equals,
  CoolBar_GetHashCode,
  CoolBar_ToString,
  CoolBar_GetAlign,
  CoolBar_SetAlign,
  CoolBar_GetAnchors,
  CoolBar_SetAnchors,
  CoolBar_GetAutoSize,
  CoolBar_SetAutoSize,
  CoolBar_GetBandBorderStyle,
  CoolBar_SetBandBorderStyle,
  CoolBar_GetBandMaximize,
  CoolBar_SetBandMaximize,
  CoolBar_GetBands,
  CoolBar_SetBands,
  CoolBar_GetBorderWidth,
  CoolBar_SetBorderWidth,
  CoolBar_GetColor,
  CoolBar_SetColor,
  CoolBar_GetConstraints,
  CoolBar_SetConstraints,
  CoolBar_GetDockSite,
  CoolBar_SetDockSite,
  CoolBar_GetDoubleBuffered,
  CoolBar_SetDoubleBuffered,
  CoolBar_GetDragCursor,
  CoolBar_SetDragCursor,
  CoolBar_GetDragKind,
  CoolBar_SetDragKind,
  CoolBar_GetDragMode,
  CoolBar_SetDragMode,
  CoolBar_GetEdgeBorders,
  CoolBar_SetEdgeBorders,
  CoolBar_GetEdgeInner,
  CoolBar_SetEdgeInner,
  CoolBar_GetEdgeOuter,
  CoolBar_SetEdgeOuter,
  CoolBar_GetEnabled,
  CoolBar_SetEnabled,
  CoolBar_GetFixedSize,
  CoolBar_SetFixedSize,
  CoolBar_GetFixedOrder,
  CoolBar_SetFixedOrder,
  CoolBar_GetFont,
  CoolBar_SetFont,
  CoolBar_GetImages,
  CoolBar_SetImages,
  CoolBar_GetParentColor,
  CoolBar_SetParentColor,
  CoolBar_GetParentDoubleBuffered,
  CoolBar_SetParentDoubleBuffered,
  CoolBar_GetParentFont,
  CoolBar_SetParentFont,
  CoolBar_GetParentShowHint,
  CoolBar_SetParentShowHint,
  CoolBar_GetBitmap,
  CoolBar_SetBitmap,
  CoolBar_GetPopupMenu,
  CoolBar_SetPopupMenu,
  CoolBar_GetShowHint,
  CoolBar_SetShowHint,
  CoolBar_GetShowText,
  CoolBar_SetShowText,
  CoolBar_GetVertical,
  CoolBar_SetVertical,
  CoolBar_GetVisible,
  CoolBar_SetVisible,
  CoolBar_SetOnChange,
  CoolBar_SetOnClick,
  CoolBar_SetOnContextPopup,
  CoolBar_SetOnDblClick,
  CoolBar_SetOnDockDrop,
  CoolBar_SetOnDragDrop,
  CoolBar_SetOnDragOver,
  CoolBar_SetOnEndDock,
  CoolBar_SetOnEndDrag,
  CoolBar_SetOnGetSiteInfo,
  CoolBar_SetOnMouseDown,
  CoolBar_SetOnMouseEnter,
  CoolBar_SetOnMouseLeave,
  CoolBar_SetOnMouseMove,
  CoolBar_SetOnMouseUp,
  CoolBar_SetOnResize,
  CoolBar_SetOnStartDock,
  CoolBar_SetOnUnDock,
  CoolBar_GetDockClientCount,
  CoolBar_GetMouseInClient,
  CoolBar_GetVisibleDockClientCount,
  CoolBar_GetBrush,
  CoolBar_GetControlCount,
  CoolBar_GetHandle,
  CoolBar_GetParentWindow,
  CoolBar_SetParentWindow,
  CoolBar_GetTabOrder,
  CoolBar_SetTabOrder,
  CoolBar_GetTabStop,
  CoolBar_SetTabStop,
  CoolBar_GetUseDockManager,
  CoolBar_SetUseDockManager,
  CoolBar_GetAction,
  CoolBar_SetAction,
  CoolBar_GetBiDiMode,
  CoolBar_SetBiDiMode,
  CoolBar_GetBoundsRect,
  CoolBar_SetBoundsRect,
  CoolBar_GetClientHeight,
  CoolBar_SetClientHeight,
  CoolBar_GetClientOrigin,
  CoolBar_GetClientRect,
  CoolBar_GetClientWidth,
  CoolBar_SetClientWidth,
  CoolBar_GetControlState,
  CoolBar_SetControlState,
  CoolBar_GetControlStyle,
  CoolBar_SetControlStyle,
  CoolBar_GetFloating,
  CoolBar_GetParent,
  CoolBar_SetParent,
  CoolBar_GetLeft,
  CoolBar_SetLeft,
  CoolBar_GetTop,
  CoolBar_SetTop,
  CoolBar_GetWidth,
  CoolBar_SetWidth,
  CoolBar_GetHeight,
  CoolBar_SetHeight,
  CoolBar_GetCursor,
  CoolBar_SetCursor,
  CoolBar_GetHint,
  CoolBar_SetHint,
  CoolBar_GetComponentCount,
  CoolBar_GetComponentIndex,
  CoolBar_SetComponentIndex,
  CoolBar_GetOwner,
  CoolBar_GetName,
  CoolBar_SetName,
  CoolBar_GetTag,
  CoolBar_SetTag,
  CoolBar_GetDockClients,
  CoolBar_GetControls,
  CoolBar_GetComponents,
  CoolBar_StaticClassType,
  CoolBar_GetMargins,
  CoolBar_SetMargins;

