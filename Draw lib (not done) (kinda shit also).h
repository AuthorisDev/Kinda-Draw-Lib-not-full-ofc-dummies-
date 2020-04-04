#pragma once
#include "ImGUI/imgui.h"
#include "ImGUI/imgui_internal.h"
#include <cstdint>

/*DONT FUCKING SAY OWL HUB OR SOME THINGS DOESNT WORK*/


void DrawLine(const ImVec2& From, const ImVec2& To, uint32_t Color, float Thickness) {
	ImGuiWindow* Window = ImGui::GetCurrentWindow();

	float Red = (Color >> 16) & 0xff; // R
	float Green = (Color >> 8) & 0xff; // G
	float Blue = (Color) & 0xff; // B
	float Alpha = (Color >> 24) & 0xff; // A

	Window->DrawList->AddLine(From, To, ImGui::GetColorU32({ Red / 255.0f, Green / 255.0f, Blue / 255.0f, Alpha / 255.0f }), Thickness);
}

void DrawRectangle(const ImVec2& From, const ImVec2& To, uint32_t Color, float Rounding, uint32_t RoundingCornersFlags, float Thickness) {
	ImGuiWindow* Window = ImGui::GetCurrentWindow();

	/* Colours */
	float Red = (Color >> 16) & 0xFF;
	float Green = (Color >> 8) & 0xFF;
	float Blue = (Color) & 0xFF;
	float Alpha = (Color >> 24) & 0xFF;

	Window->DrawList->AddRect(From, To, ImGui::GetColorU32({ Red / 255.0f, Green / 255.0f, Blue / 255.0f, Alpha / 255.0f }), Rounding, RoundingCornersFlags, Thickness);
}

void DrawCircle(const ImVec2& Position, float Radius, uint32_t Color, float Thickness, uint32_t Segments) {
	ImGuiWindow* Window = ImGui::GetCurrentWindow();

	/* Colours */
	float Red = (Color >> 16) & 0xff;
	float Green = (Color >> 8) & 0xff;
	float Blue = (Color) & 0xff;
	float Alpha = (Color >> 24) & 0xff;

	Window->DrawList->AddCircle(Position, Radius, ImGui::GetColorU32({ Red / 255.0f, Green / 255.0f, Blue / 255.0f, Alpha / 255.0f }), Segments, Thickness);
}