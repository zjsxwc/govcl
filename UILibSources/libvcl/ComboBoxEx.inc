
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function ComboBoxEx_Create(AOwner: TComponent): TComboBoxEx; stdcall;
begin
  Result :=  TComboBoxEx.Create(AOwner);
end;

procedure ComboBoxEx_Free(AObj: TComboBoxEx); stdcall;
begin
  AObj.Free;
end;

function ComboBoxEx_Focused(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

procedure ComboBoxEx_AddItem(AObj: TComboBoxEx; Item: PChar; AObject: TObject); stdcall;
begin
  AObj.AddItem(Item, AObject);
end;

procedure ComboBoxEx_Clear(AObj: TComboBoxEx); stdcall;
begin
  AObj.Clear;
end;

procedure ComboBoxEx_ClearSelection(AObj: TComboBoxEx); stdcall;
begin
  AObj.ClearSelection;
end;

procedure ComboBoxEx_CopySelection(AObj: TComboBoxEx; Destination: TCustomListControl); stdcall;
begin
  AObj.CopySelection(Destination);
end;

procedure ComboBoxEx_DeleteSelected(AObj: TComboBoxEx); stdcall;
begin
  AObj.DeleteSelected;
end;

procedure ComboBoxEx_SelectAll(AObj: TComboBoxEx); stdcall;
begin
  AObj.SelectAll;
end;

function ComboBoxEx_CanFocus(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function ComboBoxEx_ContainsControl(AObj: TComboBoxEx; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ComboBoxEx_ControlAtPos(AObj: TComboBoxEx; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure ComboBoxEx_DisableAlign(AObj: TComboBoxEx); stdcall;
begin
  AObj.DisableAlign;
end;

procedure ComboBoxEx_EnableAlign(AObj: TComboBoxEx); stdcall;
begin
  AObj.EnableAlign;
end;

function ComboBoxEx_FindChildControl(AObj: TComboBoxEx; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ComboBoxEx_FlipChildren(AObj: TComboBoxEx; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function ComboBoxEx_HandleAllocated(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ComboBoxEx_InsertControl(AObj: TComboBoxEx; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure ComboBoxEx_Invalidate(AObj: TComboBoxEx); stdcall;
begin
  AObj.Invalidate;
end;

procedure ComboBoxEx_PaintTo(AObj: TComboBoxEx; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure ComboBoxEx_RemoveControl(AObj: TComboBoxEx; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure ComboBoxEx_Realign(AObj: TComboBoxEx); stdcall;
begin
  AObj.Realign;
end;

procedure ComboBoxEx_Repaint(AObj: TComboBoxEx); stdcall;
begin
  AObj.Repaint;
end;

procedure ComboBoxEx_ScaleBy(AObj: TComboBoxEx; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure ComboBoxEx_ScrollBy(AObj: TComboBoxEx; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ComboBoxEx_SetBounds(AObj: TComboBoxEx; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ComboBoxEx_SetFocus(AObj: TComboBoxEx); stdcall;
begin
  AObj.SetFocus;
end;

procedure ComboBoxEx_Update(AObj: TComboBoxEx); stdcall;
begin
  AObj.Update;
end;

procedure ComboBoxEx_UpdateControlState(AObj: TComboBoxEx); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure ComboBoxEx_BringToFront(AObj: TComboBoxEx); stdcall;
begin
  AObj.BringToFront;
end;

procedure ComboBoxEx_ClientToScreen(AObj: TComboBoxEx; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ComboBoxEx_ClientToParent(AObj: TComboBoxEx; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ComboBoxEx_Dragging(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function ComboBoxEx_HasParent(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure ComboBoxEx_Hide(AObj: TComboBoxEx); stdcall;
begin
  AObj.Hide;
end;

function ComboBoxEx_Perform(AObj: TComboBoxEx; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ComboBoxEx_Refresh(AObj: TComboBoxEx); stdcall;
begin
  AObj.Refresh;
end;

procedure ComboBoxEx_ScreenToClient(AObj: TComboBoxEx; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ComboBoxEx_ParentToClient(AObj: TComboBoxEx; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ComboBoxEx_SendToBack(AObj: TComboBoxEx); stdcall;
begin
  AObj.SendToBack;
end;

procedure ComboBoxEx_Show(AObj: TComboBoxEx); stdcall;
begin
  AObj.Show;
end;

function ComboBoxEx_GetTextBuf(AObj: TComboBoxEx; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ComboBoxEx_GetTextLen(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure ComboBoxEx_SetTextBuf(AObj: TComboBoxEx; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function ComboBoxEx_FindComponent(AObj: TComboBoxEx; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ComboBoxEx_GetNamePath(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ComboBoxEx_Assign(AObj: TComboBoxEx; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure ComboBoxEx_DisposeOf(AObj: TComboBoxEx); stdcall;
begin
  AObj.DisposeOf;
end;

function ComboBoxEx_ClassType(AObj: TComboBoxEx): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function ComboBoxEx_ClassName(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function ComboBoxEx_InstanceSize(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function ComboBoxEx_InheritsFrom(AObj: TComboBoxEx; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ComboBoxEx_Equals(AObj: TComboBoxEx; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function ComboBoxEx_GetHashCode(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function ComboBoxEx_ToString(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function ComboBoxEx_GetAlign(AObj: TComboBoxEx): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure ComboBoxEx_SetAlign(AObj: TComboBoxEx; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function ComboBoxEx_GetAutoCompleteOptions(AObj: TComboBoxEx): TAutoCompleteOptions; stdcall;
begin
  Result :=  AObj.AutoCompleteOptions;
end;

procedure ComboBoxEx_SetAutoCompleteOptions(AObj: TComboBoxEx; AValue: TAutoCompleteOptions); stdcall;
begin
  AObj.AutoCompleteOptions := AValue;
end;

function ComboBoxEx_GetItemsEx(AObj: TComboBoxEx): TComboExItems; stdcall;
begin
  Result :=  AObj.ItemsEx;
end;

procedure ComboBoxEx_SetItemsEx(AObj: TComboBoxEx; AValue: TComboExItems); stdcall;
begin
  AObj.ItemsEx := AValue;
end;

function ComboBoxEx_GetStyle(AObj: TComboBoxEx): TComboBoxExStyle; stdcall;
begin
  Result :=  AObj.Style;
end;

procedure ComboBoxEx_SetStyle(AObj: TComboBoxEx; AValue: TComboBoxExStyle); stdcall;
begin
  AObj.Style := AValue;
end;

function ComboBoxEx_GetStyleEx(AObj: TComboBoxEx): TComboBoxExStyles; stdcall;
begin
  Result :=  AObj.StyleEx;
end;

procedure ComboBoxEx_SetStyleEx(AObj: TComboBoxEx; AValue: TComboBoxExStyles); stdcall;
begin
  AObj.StyleEx := AValue;
end;

function ComboBoxEx_GetAction(AObj: TComboBoxEx): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure ComboBoxEx_SetAction(AObj: TComboBoxEx; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function ComboBoxEx_GetAnchors(AObj: TComboBoxEx): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure ComboBoxEx_SetAnchors(AObj: TComboBoxEx; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function ComboBoxEx_GetBiDiMode(AObj: TComboBoxEx): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ComboBoxEx_SetBiDiMode(AObj: TComboBoxEx; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function ComboBoxEx_GetColor(AObj: TComboBoxEx): TColor; stdcall;
begin
  Result :=  AObj.Color;
end;

procedure ComboBoxEx_SetColor(AObj: TComboBoxEx; AValue: TColor); stdcall;
begin
  AObj.Color := AValue;
end;

function ComboBoxEx_GetConstraints(AObj: TComboBoxEx): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure ComboBoxEx_SetConstraints(AObj: TComboBoxEx; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function ComboBoxEx_GetCtl3D(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Ctl3D;
end;

procedure ComboBoxEx_SetCtl3D(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.Ctl3D := AValue;
end;

function ComboBoxEx_GetDoubleBuffered(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ComboBoxEx_SetDoubleBuffered(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function ComboBoxEx_GetDragCursor(AObj: TComboBoxEx): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure ComboBoxEx_SetDragCursor(AObj: TComboBoxEx; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function ComboBoxEx_GetDragKind(AObj: TComboBoxEx): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure ComboBoxEx_SetDragKind(AObj: TComboBoxEx; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function ComboBoxEx_GetDragMode(AObj: TComboBoxEx): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure ComboBoxEx_SetDragMode(AObj: TComboBoxEx; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function ComboBoxEx_GetEnabled(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure ComboBoxEx_SetEnabled(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function ComboBoxEx_GetFont(AObj: TComboBoxEx): TFont; stdcall;
begin
  Result :=  AObj.Font;
end;

procedure ComboBoxEx_SetFont(AObj: TComboBoxEx; AValue: TFont); stdcall;
begin
  AObj.Font := AValue;
end;

function ComboBoxEx_GetItemHeight(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ItemHeight;
end;

procedure ComboBoxEx_SetItemHeight(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.ItemHeight := AValue;
end;

function ComboBoxEx_GetMaxLength(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.MaxLength;
end;

procedure ComboBoxEx_SetMaxLength(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.MaxLength := AValue;
end;

function ComboBoxEx_GetParentColor(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ParentColor;
end;

procedure ComboBoxEx_SetParentColor(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ParentColor := AValue;
end;

function ComboBoxEx_GetParentCtl3D(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure ComboBoxEx_SetParentCtl3D(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ParentCtl3D := AValue;
end;

function ComboBoxEx_GetParentDoubleBuffered(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure ComboBoxEx_SetParentDoubleBuffered(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function ComboBoxEx_GetParentFont(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ParentFont;
end;

procedure ComboBoxEx_SetParentFont(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ParentFont := AValue;
end;

function ComboBoxEx_GetParentShowHint(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ComboBoxEx_SetParentShowHint(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function ComboBoxEx_GetPopupMenu(AObj: TComboBoxEx): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ComboBoxEx_SetPopupMenu(AObj: TComboBoxEx; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function ComboBoxEx_GetShowHint(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure ComboBoxEx_SetShowHint(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function ComboBoxEx_GetTabOrder(AObj: TComboBoxEx): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure ComboBoxEx_SetTabOrder(AObj: TComboBoxEx; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function ComboBoxEx_GetTabStop(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure ComboBoxEx_SetTabStop(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function ComboBoxEx_GetText(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.Text);
end;

procedure ComboBoxEx_SetText(AObj: TComboBoxEx; AValue: PChar); stdcall;
begin
  AObj.Text := AValue;
end;

function ComboBoxEx_GetVisible(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure ComboBoxEx_SetVisible(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function ComboBoxEx_GetStyleElements(AObj: TComboBoxEx): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure ComboBoxEx_SetStyleElements(AObj: TComboBoxEx; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure ComboBoxEx_SetOnBeginEdit(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnBeginEdit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnBeginEdit);
    Exit;
  end;
  AObj.OnBeginEdit := TEventClass.OnBeginEdit;
  TEventClass.Add(AObj, @TEventClass.OnBeginEdit, AEventId);
end;

procedure ComboBoxEx_SetOnChange(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, @TEventClass.OnChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, @TEventClass.OnChange, AEventId);
end;

procedure ComboBoxEx_SetOnClick(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, @TEventClass.OnClick, AEventId);
end;

procedure ComboBoxEx_SetOnContextPopup(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, @TEventClass.OnContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, @TEventClass.OnContextPopup, AEventId);
end;

procedure ComboBoxEx_SetOnDblClick(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDblClick);
    Exit;
  end;
  AObj.OnDblClick := TEventClass.OnDblClick;
  TEventClass.Add(AObj, @TEventClass.OnDblClick, AEventId);
end;

procedure ComboBoxEx_SetOnDragDrop(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, @TEventClass.OnDragDrop, AEventId);
end;

procedure ComboBoxEx_SetOnDragOver(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, @TEventClass.OnDragOver, AEventId);
end;

procedure ComboBoxEx_SetOnDropDown(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDropDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDropDown);
    Exit;
  end;
  AObj.OnDropDown := TEventClass.OnDropDown;
  TEventClass.Add(AObj, @TEventClass.OnDropDown, AEventId);
end;

procedure ComboBoxEx_SetOnEndEdit(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndEdit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndEdit);
    Exit;
  end;
  AObj.OnEndEdit := TEventClass.OnEndEdit;
  TEventClass.Add(AObj, @TEventClass.OnEndEdit, AEventId);
end;

procedure ComboBoxEx_SetOnEndDock(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, @TEventClass.OnEndDock, AEventId);
end;

procedure ComboBoxEx_SetOnEndDrag(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, @TEventClass.OnEndDrag, AEventId);
end;

procedure ComboBoxEx_SetOnEnter(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, @TEventClass.OnEnter, AEventId);
end;

procedure ComboBoxEx_SetOnExit(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, @TEventClass.OnExit, AEventId);
end;

procedure ComboBoxEx_SetOnGesture(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

procedure ComboBoxEx_SetOnKeyDown(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, @TEventClass.OnKeyDown, AEventId);
end;

procedure ComboBoxEx_SetOnKeyPress(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, @TEventClass.OnKeyPress, AEventId);
end;

procedure ComboBoxEx_SetOnKeyUp(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, @TEventClass.OnKeyUp, AEventId);
end;

procedure ComboBoxEx_SetOnMouseMove(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, @TEventClass.OnMouseMove, AEventId);
end;

procedure ComboBoxEx_SetOnSelect(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnSelect := nil;
    TEventClass.Remove(AObj, @TEventClass.OnSelect);
    Exit;
  end;
  AObj.OnSelect := TEventClass.OnSelect;
  TEventClass.Add(AObj, @TEventClass.OnSelect, AEventId);
end;

procedure ComboBoxEx_SetOnStartDock(AObj: TComboBoxEx; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, @TEventClass.OnStartDock, AEventId);
end;

function ComboBoxEx_GetImages(AObj: TComboBoxEx): TCustomImageList; stdcall;
begin
  Result :=  AObj.Images;
end;

procedure ComboBoxEx_SetImages(AObj: TComboBoxEx; AValue: TCustomImageList); stdcall;
begin
  AObj.Images := AValue;
end;

function ComboBoxEx_GetDropDownCount(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.DropDownCount;
end;

procedure ComboBoxEx_SetDropDownCount(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.DropDownCount := AValue;
end;

function ComboBoxEx_GetSelText(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.SelText);
end;

procedure ComboBoxEx_SetSelText(AObj: TComboBoxEx; AValue: PChar); stdcall;
begin
  AObj.SelText := AValue;
end;

function ComboBoxEx_GetCanvas(AObj: TComboBoxEx): TCanvas; stdcall;
begin
  Result :=  AObj.Canvas;
end;

function ComboBoxEx_GetDroppedDown(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.DroppedDown;
end;

procedure ComboBoxEx_SetDroppedDown(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.DroppedDown := AValue;
end;

function ComboBoxEx_GetItems(AObj: TComboBoxEx): TStrings; stdcall;
begin
  Result :=  AObj.Items;
end;

procedure ComboBoxEx_SetItems(AObj: TComboBoxEx; AValue: TStrings); stdcall;
begin
  AObj.Items := AValue;
end;

function ComboBoxEx_GetSelLength(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.SelLength;
end;

procedure ComboBoxEx_SetSelLength(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.SelLength := AValue;
end;

function ComboBoxEx_GetSelStart(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.SelStart;
end;

procedure ComboBoxEx_SetSelStart(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.SelStart := AValue;
end;

function ComboBoxEx_GetItemIndex(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ComboBoxEx_SetItemIndex(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.ItemIndex := AValue;
end;

function ComboBoxEx_GetDockClientCount(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function ComboBoxEx_GetDockSite(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure ComboBoxEx_SetDockSite(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function ComboBoxEx_GetAlignDisabled(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function ComboBoxEx_GetMouseInClient(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function ComboBoxEx_GetVisibleDockClientCount(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ComboBoxEx_GetBrush(AObj: TComboBoxEx): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function ComboBoxEx_GetControlCount(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function ComboBoxEx_GetHandle(AObj: TComboBoxEx): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function ComboBoxEx_GetParentWindow(AObj: TComboBoxEx): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ComboBoxEx_SetParentWindow(AObj: TComboBoxEx; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function ComboBoxEx_GetUseDockManager(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ComboBoxEx_SetUseDockManager(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

procedure ComboBoxEx_GetBoundsRect(AObj: TComboBoxEx; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ComboBoxEx_SetBoundsRect(AObj: TComboBoxEx; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function ComboBoxEx_GetClientHeight(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ComboBoxEx_SetClientHeight(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure ComboBoxEx_GetClientOrigin(AObj: TComboBoxEx; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ComboBoxEx_GetClientRect(AObj: TComboBoxEx; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function ComboBoxEx_GetClientWidth(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ComboBoxEx_SetClientWidth(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function ComboBoxEx_GetControlState(AObj: TComboBoxEx): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure ComboBoxEx_SetControlState(AObj: TComboBoxEx; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function ComboBoxEx_GetControlStyle(AObj: TComboBoxEx): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ComboBoxEx_SetControlStyle(AObj: TComboBoxEx; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function ComboBoxEx_GetExplicitLeft(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function ComboBoxEx_GetExplicitTop(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function ComboBoxEx_GetExplicitWidth(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function ComboBoxEx_GetExplicitHeight(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function ComboBoxEx_GetFloating(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function ComboBoxEx_GetParent(AObj: TComboBoxEx): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure ComboBoxEx_SetParent(AObj: TComboBoxEx; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function ComboBoxEx_GetAlignWithMargins(AObj: TComboBoxEx): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure ComboBoxEx_SetAlignWithMargins(AObj: TComboBoxEx; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function ComboBoxEx_GetLeft(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure ComboBoxEx_SetLeft(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function ComboBoxEx_GetTop(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure ComboBoxEx_SetTop(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function ComboBoxEx_GetWidth(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure ComboBoxEx_SetWidth(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function ComboBoxEx_GetHeight(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure ComboBoxEx_SetHeight(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function ComboBoxEx_GetCursor(AObj: TComboBoxEx): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure ComboBoxEx_SetCursor(AObj: TComboBoxEx; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function ComboBoxEx_GetHint(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ComboBoxEx_SetHint(AObj: TComboBoxEx; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function ComboBoxEx_GetMargins(AObj: TComboBoxEx): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure ComboBoxEx_SetMargins(AObj: TComboBoxEx; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function ComboBoxEx_GetCustomHint(AObj: TComboBoxEx): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure ComboBoxEx_SetCustomHint(AObj: TComboBoxEx; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function ComboBoxEx_GetComponentCount(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function ComboBoxEx_GetComponentIndex(AObj: TComboBoxEx): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ComboBoxEx_SetComponentIndex(AObj: TComboBoxEx; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function ComboBoxEx_GetOwner(AObj: TComboBoxEx): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function ComboBoxEx_GetName(AObj: TComboBoxEx): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ComboBoxEx_SetName(AObj: TComboBoxEx; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function ComboBoxEx_GetTag(AObj: TComboBoxEx): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure ComboBoxEx_SetTag(AObj: TComboBoxEx; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function ComboBoxEx_GetDockClients(AObj: TComboBoxEx; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function ComboBoxEx_GetControls(AObj: TComboBoxEx; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function ComboBoxEx_GetComponents(AObj: TComboBoxEx; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function ComboBoxEx_StaticClassType: TClass; stdcall;
begin
  Result := TComboBoxEx;
end;

exports
  ComboBoxEx_Create,
  ComboBoxEx_Free,
  ComboBoxEx_Focused,
  ComboBoxEx_AddItem,
  ComboBoxEx_Clear,
  ComboBoxEx_ClearSelection,
  ComboBoxEx_CopySelection,
  ComboBoxEx_DeleteSelected,
  ComboBoxEx_SelectAll,
  ComboBoxEx_CanFocus,
  ComboBoxEx_ContainsControl,
  ComboBoxEx_ControlAtPos,
  ComboBoxEx_DisableAlign,
  ComboBoxEx_EnableAlign,
  ComboBoxEx_FindChildControl,
  ComboBoxEx_FlipChildren,
  ComboBoxEx_HandleAllocated,
  ComboBoxEx_InsertControl,
  ComboBoxEx_Invalidate,
  ComboBoxEx_PaintTo,
  ComboBoxEx_RemoveControl,
  ComboBoxEx_Realign,
  ComboBoxEx_Repaint,
  ComboBoxEx_ScaleBy,
  ComboBoxEx_ScrollBy,
  ComboBoxEx_SetBounds,
  ComboBoxEx_SetFocus,
  ComboBoxEx_Update,
  ComboBoxEx_UpdateControlState,
  ComboBoxEx_BringToFront,
  ComboBoxEx_ClientToScreen,
  ComboBoxEx_ClientToParent,
  ComboBoxEx_Dragging,
  ComboBoxEx_HasParent,
  ComboBoxEx_Hide,
  ComboBoxEx_Perform,
  ComboBoxEx_Refresh,
  ComboBoxEx_ScreenToClient,
  ComboBoxEx_ParentToClient,
  ComboBoxEx_SendToBack,
  ComboBoxEx_Show,
  ComboBoxEx_GetTextBuf,
  ComboBoxEx_GetTextLen,
  ComboBoxEx_SetTextBuf,
  ComboBoxEx_FindComponent,
  ComboBoxEx_GetNamePath,
  ComboBoxEx_Assign,
  ComboBoxEx_DisposeOf,
  ComboBoxEx_ClassType,
  ComboBoxEx_ClassName,
  ComboBoxEx_InstanceSize,
  ComboBoxEx_InheritsFrom,
  ComboBoxEx_Equals,
  ComboBoxEx_GetHashCode,
  ComboBoxEx_ToString,
  ComboBoxEx_GetAlign,
  ComboBoxEx_SetAlign,
  ComboBoxEx_GetAutoCompleteOptions,
  ComboBoxEx_SetAutoCompleteOptions,
  ComboBoxEx_GetItemsEx,
  ComboBoxEx_SetItemsEx,
  ComboBoxEx_GetStyle,
  ComboBoxEx_SetStyle,
  ComboBoxEx_GetStyleEx,
  ComboBoxEx_SetStyleEx,
  ComboBoxEx_GetAction,
  ComboBoxEx_SetAction,
  ComboBoxEx_GetAnchors,
  ComboBoxEx_SetAnchors,
  ComboBoxEx_GetBiDiMode,
  ComboBoxEx_SetBiDiMode,
  ComboBoxEx_GetColor,
  ComboBoxEx_SetColor,
  ComboBoxEx_GetConstraints,
  ComboBoxEx_SetConstraints,
  ComboBoxEx_GetCtl3D,
  ComboBoxEx_SetCtl3D,
  ComboBoxEx_GetDoubleBuffered,
  ComboBoxEx_SetDoubleBuffered,
  ComboBoxEx_GetDragCursor,
  ComboBoxEx_SetDragCursor,
  ComboBoxEx_GetDragKind,
  ComboBoxEx_SetDragKind,
  ComboBoxEx_GetDragMode,
  ComboBoxEx_SetDragMode,
  ComboBoxEx_GetEnabled,
  ComboBoxEx_SetEnabled,
  ComboBoxEx_GetFont,
  ComboBoxEx_SetFont,
  ComboBoxEx_GetItemHeight,
  ComboBoxEx_SetItemHeight,
  ComboBoxEx_GetMaxLength,
  ComboBoxEx_SetMaxLength,
  ComboBoxEx_GetParentColor,
  ComboBoxEx_SetParentColor,
  ComboBoxEx_GetParentCtl3D,
  ComboBoxEx_SetParentCtl3D,
  ComboBoxEx_GetParentDoubleBuffered,
  ComboBoxEx_SetParentDoubleBuffered,
  ComboBoxEx_GetParentFont,
  ComboBoxEx_SetParentFont,
  ComboBoxEx_GetParentShowHint,
  ComboBoxEx_SetParentShowHint,
  ComboBoxEx_GetPopupMenu,
  ComboBoxEx_SetPopupMenu,
  ComboBoxEx_GetShowHint,
  ComboBoxEx_SetShowHint,
  ComboBoxEx_GetTabOrder,
  ComboBoxEx_SetTabOrder,
  ComboBoxEx_GetTabStop,
  ComboBoxEx_SetTabStop,
  ComboBoxEx_GetText,
  ComboBoxEx_SetText,
  ComboBoxEx_GetVisible,
  ComboBoxEx_SetVisible,
  ComboBoxEx_GetStyleElements,
  ComboBoxEx_SetStyleElements,
  ComboBoxEx_SetOnBeginEdit,
  ComboBoxEx_SetOnChange,
  ComboBoxEx_SetOnClick,
  ComboBoxEx_SetOnContextPopup,
  ComboBoxEx_SetOnDblClick,
  ComboBoxEx_SetOnDragDrop,
  ComboBoxEx_SetOnDragOver,
  ComboBoxEx_SetOnDropDown,
  ComboBoxEx_SetOnEndEdit,
  ComboBoxEx_SetOnEndDock,
  ComboBoxEx_SetOnEndDrag,
  ComboBoxEx_SetOnEnter,
  ComboBoxEx_SetOnExit,
  ComboBoxEx_SetOnGesture,
  ComboBoxEx_SetOnKeyDown,
  ComboBoxEx_SetOnKeyPress,
  ComboBoxEx_SetOnKeyUp,
  ComboBoxEx_SetOnMouseMove,
  ComboBoxEx_SetOnSelect,
  ComboBoxEx_SetOnStartDock,
  ComboBoxEx_GetImages,
  ComboBoxEx_SetImages,
  ComboBoxEx_GetDropDownCount,
  ComboBoxEx_SetDropDownCount,
  ComboBoxEx_GetSelText,
  ComboBoxEx_SetSelText,
  ComboBoxEx_GetCanvas,
  ComboBoxEx_GetDroppedDown,
  ComboBoxEx_SetDroppedDown,
  ComboBoxEx_GetItems,
  ComboBoxEx_SetItems,
  ComboBoxEx_GetSelLength,
  ComboBoxEx_SetSelLength,
  ComboBoxEx_GetSelStart,
  ComboBoxEx_SetSelStart,
  ComboBoxEx_GetItemIndex,
  ComboBoxEx_SetItemIndex,
  ComboBoxEx_GetDockClientCount,
  ComboBoxEx_GetDockSite,
  ComboBoxEx_SetDockSite,
  ComboBoxEx_GetAlignDisabled,
  ComboBoxEx_GetMouseInClient,
  ComboBoxEx_GetVisibleDockClientCount,
  ComboBoxEx_GetBrush,
  ComboBoxEx_GetControlCount,
  ComboBoxEx_GetHandle,
  ComboBoxEx_GetParentWindow,
  ComboBoxEx_SetParentWindow,
  ComboBoxEx_GetUseDockManager,
  ComboBoxEx_SetUseDockManager,
  ComboBoxEx_GetBoundsRect,
  ComboBoxEx_SetBoundsRect,
  ComboBoxEx_GetClientHeight,
  ComboBoxEx_SetClientHeight,
  ComboBoxEx_GetClientOrigin,
  ComboBoxEx_GetClientRect,
  ComboBoxEx_GetClientWidth,
  ComboBoxEx_SetClientWidth,
  ComboBoxEx_GetControlState,
  ComboBoxEx_SetControlState,
  ComboBoxEx_GetControlStyle,
  ComboBoxEx_SetControlStyle,
  ComboBoxEx_GetExplicitLeft,
  ComboBoxEx_GetExplicitTop,
  ComboBoxEx_GetExplicitWidth,
  ComboBoxEx_GetExplicitHeight,
  ComboBoxEx_GetFloating,
  ComboBoxEx_GetParent,
  ComboBoxEx_SetParent,
  ComboBoxEx_GetAlignWithMargins,
  ComboBoxEx_SetAlignWithMargins,
  ComboBoxEx_GetLeft,
  ComboBoxEx_SetLeft,
  ComboBoxEx_GetTop,
  ComboBoxEx_SetTop,
  ComboBoxEx_GetWidth,
  ComboBoxEx_SetWidth,
  ComboBoxEx_GetHeight,
  ComboBoxEx_SetHeight,
  ComboBoxEx_GetCursor,
  ComboBoxEx_SetCursor,
  ComboBoxEx_GetHint,
  ComboBoxEx_SetHint,
  ComboBoxEx_GetMargins,
  ComboBoxEx_SetMargins,
  ComboBoxEx_GetCustomHint,
  ComboBoxEx_SetCustomHint,
  ComboBoxEx_GetComponentCount,
  ComboBoxEx_GetComponentIndex,
  ComboBoxEx_SetComponentIndex,
  ComboBoxEx_GetOwner,
  ComboBoxEx_GetName,
  ComboBoxEx_SetName,
  ComboBoxEx_GetTag,
  ComboBoxEx_SetTag,
  ComboBoxEx_GetDockClients,
  ComboBoxEx_GetControls,
  ComboBoxEx_GetComponents,
  ComboBoxEx_StaticClassType;

