; ModuleID = 'shoc-1.1.5-S3D-ratt5_kernel.cl'
source_filename = "shoc-1.1.5-S3D-ratt5_kernel.cl"
target datalayout = "e-m:o-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.13.0"

; Function Attrs: nounwind ssp uwtable
define spir_kernel void @ratt5_kernel(float* nocapture readonly, float* readonly, float*, float* readonly, float) local_unnamed_addr #0 !kernel_arg_addr_space !4 !kernel_arg_access_qual !5 !kernel_arg_type !6 !kernel_arg_base_type !6 !kernel_arg_type_qual !7 {
  %6 = tail call i64 @_Z13get_global_idj(i32 0) #2
  %7 = getelementptr inbounds float, float* %0, i64 %6
  %8 = load float, float* %7, align 4, !tbaa !8
  %9 = fmul float %8, %4
  %10 = fmul float %9, 0x4193D2C640000000
  %11 = fdiv float 1.000000e+00, %10, !fpmath !12
  %12 = fmul float %11, 1.013250e+06
  %13 = add i64 %6, 48
  %14 = getelementptr inbounds float, float* %3, i64 %13
  %15 = load float, float* %14, align 4, !tbaa !8
  %16 = add i64 %6, 128
  %17 = getelementptr inbounds float, float* %3, i64 %16
  %18 = load float, float* %17, align 4, !tbaa !8
  %19 = fmul float %15, %18
  %20 = add i64 %6, 56
  %21 = getelementptr inbounds float, float* %3, i64 %20
  %22 = load float, float* %21, align 4, !tbaa !8
  %23 = add i64 %6, 120
  %24 = getelementptr inbounds float, float* %3, i64 %23
  %25 = load float, float* %24, align 4, !tbaa !8
  %26 = fmul float %22, %25
  %27 = fdiv float 1.000000e+00, %26, !fpmath !12
  %28 = fmul float %19, %27
  %29 = add i64 %6, 600
  %30 = getelementptr inbounds float, float* %1, i64 %29
  %31 = load float, float* %30, align 4, !tbaa !8
  %32 = tail call float @_Z4fminff(float %28, float 0x4415AF1D80000000) #2
  %33 = fmul float %31, %32
  %34 = getelementptr inbounds float, float* %2, i64 %29
  store float %33, float* %34, align 4, !tbaa !8
  %35 = add i64 %6, 64
  %36 = getelementptr inbounds float, float* %3, i64 %35
  %37 = load float, float* %36, align 4, !tbaa !8
  %38 = load float, float* %17, align 4, !tbaa !8
  %39 = fmul float %37, %38
  %40 = add i64 %6, 8
  %41 = getelementptr inbounds float, float* %3, i64 %40
  %42 = load float, float* %41, align 4, !tbaa !8
  %43 = add i64 %6, 200
  %44 = getelementptr inbounds float, float* %3, i64 %43
  %45 = load float, float* %44, align 4, !tbaa !8
  %46 = fmul float %42, %45
  %47 = fdiv float 1.000000e+00, %46, !fpmath !12
  %48 = fmul float %39, %47
  %49 = add i64 %6, 608
  %50 = getelementptr inbounds float, float* %1, i64 %49
  %51 = load float, float* %50, align 4, !tbaa !8
  %52 = tail call float @_Z4fminff(float %48, float 0x4415AF1D80000000) #2
  %53 = fmul float %51, %52
  %54 = getelementptr inbounds float, float* %2, i64 %49
  store float %53, float* %54, align 4, !tbaa !8
  %55 = load float, float* %41, align 4, !tbaa !8
  %56 = add i64 %6, 88
  %57 = getelementptr inbounds float, float* %3, i64 %56
  %58 = load float, float* %57, align 4, !tbaa !8
  %59 = fmul float %55, %58
  %60 = fmul float %12, %59
  %61 = add i64 %6, 96
  %62 = getelementptr inbounds float, float* %3, i64 %61
  %63 = load float, float* %62, align 4, !tbaa !8
  %64 = fdiv float 1.000000e+00, %63, !fpmath !12
  %65 = fmul float %60, %64
  %66 = add i64 %6, 616
  %67 = getelementptr inbounds float, float* %1, i64 %66
  %68 = load float, float* %67, align 4, !tbaa !8
  %69 = tail call float @_Z4fminff(float %65, float 0x4415AF1D80000000) #2
  %70 = fmul float %68, %69
  %71 = getelementptr inbounds float, float* %2, i64 %66
  store float %70, float* %71, align 4, !tbaa !8
  %72 = add i64 %6, 16
  %73 = getelementptr inbounds float, float* %3, i64 %72
  %74 = load float, float* %73, align 4, !tbaa !8
  %75 = load float, float* %57, align 4, !tbaa !8
  %76 = fmul float %74, %75
  %77 = load float, float* %41, align 4, !tbaa !8
  %78 = load float, float* %17, align 4, !tbaa !8
  %79 = fmul float %77, %78
  %80 = fdiv float 1.000000e+00, %79, !fpmath !12
  %81 = fmul float %76, %80
  %82 = add i64 %6, 624
  %83 = getelementptr inbounds float, float* %1, i64 %82
  %84 = load float, float* %83, align 4, !tbaa !8
  %85 = tail call float @_Z4fminff(float %81, float 0x4415AF1D80000000) #2
  %86 = fmul float %84, %85
  %87 = getelementptr inbounds float, float* %2, i64 %82
  store float %86, float* %87, align 4, !tbaa !8
  %88 = add i64 %6, 32
  %89 = getelementptr inbounds float, float* %3, i64 %88
  %90 = load float, float* %89, align 4, !tbaa !8
  %91 = load float, float* %57, align 4, !tbaa !8
  %92 = fmul float %90, %91
  %93 = add i64 %6, 40
  %94 = getelementptr inbounds float, float* %3, i64 %93
  %95 = load float, float* %94, align 4, !tbaa !8
  %96 = add i64 %6, 72
  %97 = getelementptr inbounds float, float* %3, i64 %96
  %98 = load float, float* %97, align 4, !tbaa !8
  %99 = fmul float %95, %98
  %100 = fdiv float 1.000000e+00, %99, !fpmath !12
  %101 = fmul float %92, %100
  %102 = add i64 %6, 632
  %103 = getelementptr inbounds float, float* %1, i64 %102
  %104 = load float, float* %103, align 4, !tbaa !8
  %105 = tail call float @_Z4fminff(float %101, float 0x4415AF1D80000000) #2
  %106 = fmul float %104, %105
  %107 = getelementptr inbounds float, float* %2, i64 %102
  store float %106, float* %107, align 4, !tbaa !8
  %108 = load float, float* %89, align 4, !tbaa !8
  %109 = load float, float* %57, align 4, !tbaa !8
  %110 = fmul float %108, %109
  %111 = load float, float* %94, align 4, !tbaa !8
  %112 = add i64 %6, 80
  %113 = getelementptr inbounds float, float* %3, i64 %112
  %114 = load float, float* %113, align 4, !tbaa !8
  %115 = fmul float %111, %114
  %116 = fdiv float 1.000000e+00, %115, !fpmath !12
  %117 = fmul float %110, %116
  %118 = add i64 %6, 640
  %119 = getelementptr inbounds float, float* %1, i64 %118
  %120 = load float, float* %119, align 4, !tbaa !8
  %121 = tail call float @_Z4fminff(float %117, float 0x4415AF1D80000000) #2
  %122 = fmul float %120, %121
  %123 = getelementptr inbounds float, float* %2, i64 %118
  store float %122, float* %123, align 4, !tbaa !8
  %124 = add i64 %6, 24
  %125 = getelementptr inbounds float, float* %3, i64 %124
  %126 = load float, float* %125, align 4, !tbaa !8
  %127 = load float, float* %57, align 4, !tbaa !8
  %128 = fmul float %126, %127
  %129 = load float, float* %73, align 4, !tbaa !8
  %130 = add i64 %6, 136
  %131 = getelementptr inbounds float, float* %3, i64 %130
  %132 = load float, float* %131, align 4, !tbaa !8
  %133 = fmul float %129, %132
  %134 = fdiv float 1.000000e+00, %133, !fpmath !12
  %135 = fmul float %128, %134
  %136 = add i64 %6, 648
  %137 = getelementptr inbounds float, float* %1, i64 %136
  %138 = load float, float* %137, align 4, !tbaa !8
  %139 = tail call float @_Z4fminff(float %135, float 0x4415AF1D80000000) #2
  %140 = fmul float %138, %139
  %141 = getelementptr inbounds float, float* %2, i64 %136
  store float %140, float* %141, align 4, !tbaa !8
  %142 = load float, float* %125, align 4, !tbaa !8
  %143 = load float, float* %57, align 4, !tbaa !8
  %144 = fmul float %142, %143
  %145 = load float, float* %89, align 4, !tbaa !8
  %146 = load float, float* %17, align 4, !tbaa !8
  %147 = fmul float %145, %146
  %148 = fdiv float 1.000000e+00, %147, !fpmath !12
  %149 = fmul float %144, %148
  %150 = add i64 %6, 656
  %151 = getelementptr inbounds float, float* %1, i64 %150
  %152 = load float, float* %151, align 4, !tbaa !8
  %153 = tail call float @_Z4fminff(float %149, float 0x4415AF1D80000000) #2
  %154 = fmul float %152, %153
  %155 = getelementptr inbounds float, float* %2, i64 %150
  store float %154, float* %155, align 4, !tbaa !8
  %156 = load float, float* %14, align 4, !tbaa !8
  %157 = load float, float* %57, align 4, !tbaa !8
  %158 = fmul float %156, %157
  %159 = load float, float* %125, align 4, !tbaa !8
  %160 = load float, float* %62, align 4, !tbaa !8
  %161 = fmul float %159, %160
  %162 = fdiv float 1.000000e+00, %161, !fpmath !12
  %163 = fmul float %158, %162
  %164 = add i64 %6, 664
  %165 = getelementptr inbounds float, float* %1, i64 %164
  %166 = load float, float* %165, align 4, !tbaa !8
  %167 = tail call float @_Z4fminff(float %163, float 0x4415AF1D80000000) #2
  %168 = fmul float %166, %167
  %169 = getelementptr inbounds float, float* %2, i64 %164
  store float %168, float* %169, align 4, !tbaa !8
  %170 = load float, float* %14, align 4, !tbaa !8
  %171 = load float, float* %57, align 4, !tbaa !8
  %172 = fmul float %170, %171
  %173 = load float, float* %89, align 4, !tbaa !8
  %174 = load float, float* %131, align 4, !tbaa !8
  %175 = fmul float %173, %174
  %176 = fdiv float 1.000000e+00, %175, !fpmath !12
  %177 = fmul float %172, %176
  %178 = add i64 %6, 672
  %179 = getelementptr inbounds float, float* %1, i64 %178
  %180 = load float, float* %179, align 4, !tbaa !8
  %181 = tail call float @_Z4fminff(float %177, float 0x4415AF1D80000000) #2
  %182 = fmul float %180, %181
  %183 = getelementptr inbounds float, float* %2, i64 %178
  store float %182, float* %183, align 4, !tbaa !8
  %184 = load float, float* %21, align 4, !tbaa !8
  %185 = load float, float* %57, align 4, !tbaa !8
  %186 = fmul float %184, %185
  %187 = load float, float* %14, align 4, !tbaa !8
  %188 = load float, float* %62, align 4, !tbaa !8
  %189 = fmul float %187, %188
  %190 = fdiv float 1.000000e+00, %189, !fpmath !12
  %191 = fmul float %186, %190
  %192 = add i64 %6, 680
  %193 = getelementptr inbounds float, float* %1, i64 %192
  %194 = load float, float* %193, align 4, !tbaa !8
  %195 = tail call float @_Z4fminff(float %191, float 0x4415AF1D80000000) #2
  %196 = fmul float %194, %195
  %197 = getelementptr inbounds float, float* %2, i64 %192
  store float %196, float* %197, align 4, !tbaa !8
  %198 = load float, float* %36, align 4, !tbaa !8
  %199 = load float, float* %57, align 4, !tbaa !8
  %200 = fmul float %198, %199
  %201 = load float, float* %41, align 4, !tbaa !8
  %202 = add i64 %6, 160
  %203 = getelementptr inbounds float, float* %3, i64 %202
  %204 = load float, float* %203, align 4, !tbaa !8
  %205 = fmul float %201, %204
  %206 = fdiv float 1.000000e+00, %205, !fpmath !12
  %207 = fmul float %200, %206
  %208 = add i64 %6, 688
  %209 = getelementptr inbounds float, float* %1, i64 %208
  %210 = load float, float* %209, align 4, !tbaa !8
  %211 = tail call float @_Z4fminff(float %207, float 0x4415AF1D80000000) #2
  %212 = fmul float %210, %211
  %213 = getelementptr inbounds float, float* %2, i64 %208
  store float %212, float* %213, align 4, !tbaa !8
  %214 = load float, float* %57, align 4, !tbaa !8
  %215 = load float, float* %24, align 4, !tbaa !8
  %216 = fmul float %214, %215
  %217 = load float, float* %62, align 4, !tbaa !8
  %218 = add i64 %6, 104
  %219 = getelementptr inbounds float, float* %3, i64 %218
  %220 = load float, float* %219, align 4, !tbaa !8
  %221 = fmul float %217, %220
  %222 = fdiv float 1.000000e+00, %221, !fpmath !12
  %223 = fmul float %216, %222
  %224 = add i64 %6, 696
  %225 = getelementptr inbounds float, float* %1, i64 %224
  %226 = load float, float* %225, align 4, !tbaa !8
  %227 = tail call float @_Z4fminff(float %223, float 0x4415AF1D80000000) #2
  %228 = fmul float %226, %227
  %229 = getelementptr inbounds float, float* %2, i64 %224
  store float %228, float* %229, align 4, !tbaa !8
  %230 = load float, float* %57, align 4, !tbaa !8
  %231 = load float, float* %24, align 4, !tbaa !8
  %232 = fmul float %230, %231
  %233 = fmul float %12, %232
  %234 = add i64 %6, 216
  %235 = getelementptr inbounds float, float* %3, i64 %234
  %236 = load float, float* %235, align 4, !tbaa !8
  %237 = fdiv float 1.000000e+00, %236, !fpmath !12
  %238 = fmul float %233, %237
  %239 = add i64 %6, 704
  %240 = getelementptr inbounds float, float* %1, i64 %239
  %241 = load float, float* %240, align 4, !tbaa !8
  %242 = tail call float @_Z4fminff(float %238, float 0x4415AF1D80000000) #2
  %243 = fmul float %241, %242
  %244 = getelementptr inbounds float, float* %2, i64 %239
  store float %243, float* %244, align 4, !tbaa !8
  %245 = load float, float* %57, align 4, !tbaa !8
  %246 = load float, float* %17, align 4, !tbaa !8
  %247 = fmul float %245, %246
  %248 = load float, float* %62, align 4, !tbaa !8
  %249 = load float, float* %24, align 4, !tbaa !8
  %250 = fmul float %248, %249
  %251 = fdiv float 1.000000e+00, %250, !fpmath !12
  %252 = fmul float %247, %251
  %253 = add i64 %6, 712
  %254 = getelementptr inbounds float, float* %1, i64 %253
  %255 = load float, float* %254, align 4, !tbaa !8
  %256 = tail call float @_Z4fminff(float %252, float 0x4415AF1D80000000) #2
  %257 = fmul float %255, %256
  %258 = getelementptr inbounds float, float* %2, i64 %253
  store float %257, float* %258, align 4, !tbaa !8
  %259 = load float, float* %97, align 4, !tbaa !8
  %260 = load float, float* %57, align 4, !tbaa !8
  %261 = fmul float %259, %260
  %262 = load float, float* %41, align 4, !tbaa !8
  %263 = add i64 %6, 168
  %264 = getelementptr inbounds float, float* %3, i64 %263
  %265 = load float, float* %264, align 4, !tbaa !8
  %266 = fmul float %262, %265
  %267 = fdiv float 1.000000e+00, %266, !fpmath !12
  %268 = fmul float %261, %267
  %269 = add i64 %6, 720
  %270 = getelementptr inbounds float, float* %1, i64 %269
  %271 = load float, float* %270, align 4, !tbaa !8
  %272 = tail call float @_Z4fminff(float %268, float 0x4415AF1D80000000) #2
  %273 = fmul float %271, %272
  %274 = getelementptr inbounds float, float* %2, i64 %269
  store float %273, float* %274, align 4, !tbaa !8
  %275 = load float, float* %113, align 4, !tbaa !8
  %276 = load float, float* %57, align 4, !tbaa !8
  %277 = fmul float %275, %276
  %278 = load float, float* %41, align 4, !tbaa !8
  %279 = load float, float* %264, align 4, !tbaa !8
  %280 = fmul float %278, %279
  %281 = fdiv float 1.000000e+00, %280, !fpmath !12
  %282 = fmul float %277, %281
  %283 = add i64 %6, 728
  %284 = getelementptr inbounds float, float* %1, i64 %283
  %285 = load float, float* %284, align 4, !tbaa !8
  %286 = tail call float @_Z4fminff(float %282, float 0x4415AF1D80000000) #2
  %287 = fmul float %285, %286
  %288 = getelementptr inbounds float, float* %2, i64 %283
  store float %287, float* %288, align 4, !tbaa !8
  %289 = load float, float* %57, align 4, !tbaa !8
  %290 = fmul float %289, %289
  %291 = fmul float %12, %290
  %292 = add i64 %6, 184
  %293 = getelementptr inbounds float, float* %3, i64 %292
  %294 = load float, float* %293, align 4, !tbaa !8
  %295 = fdiv float 1.000000e+00, %294, !fpmath !12
  %296 = fmul float %291, %295
  %297 = add i64 %6, 736
  %298 = getelementptr inbounds float, float* %1, i64 %297
  %299 = load float, float* %298, align 4, !tbaa !8
  %300 = tail call float @_Z4fminff(float %296, float 0x4415AF1D80000000) #2
  %301 = fmul float %299, %300
  %302 = getelementptr inbounds float, float* %2, i64 %297
  store float %301, float* %302, align 4, !tbaa !8
  %303 = load float, float* %57, align 4, !tbaa !8
  %304 = fmul float %303, %303
  %305 = load float, float* %41, align 4, !tbaa !8
  %306 = add i64 %6, 176
  %307 = getelementptr inbounds float, float* %3, i64 %306
  %308 = load float, float* %307, align 4, !tbaa !8
  %309 = fmul float %305, %308
  %310 = fdiv float 1.000000e+00, %309, !fpmath !12
  %311 = fmul float %304, %310
  %312 = add i64 %6, 744
  %313 = getelementptr inbounds float, float* %1, i64 %312
  %314 = load float, float* %313, align 4, !tbaa !8
  %315 = tail call float @_Z4fminff(float %311, float 0x4415AF1D80000000) #2
  %316 = fmul float %314, %315
  %317 = getelementptr inbounds float, float* %2, i64 %312
  store float %316, float* %317, align 4, !tbaa !8
  %318 = load float, float* %57, align 4, !tbaa !8
  %319 = add i64 %6, 192
  %320 = getelementptr inbounds float, float* %3, i64 %319
  %321 = load float, float* %320, align 4, !tbaa !8
  %322 = fmul float %318, %321
  %323 = load float, float* %219, align 4, !tbaa !8
  %324 = load float, float* %264, align 4, !tbaa !8
  %325 = fmul float %323, %324
  %326 = fdiv float 1.000000e+00, %325, !fpmath !12
  %327 = fmul float %322, %326
  %328 = add i64 %6, 752
  %329 = getelementptr inbounds float, float* %1, i64 %328
  %330 = load float, float* %329, align 4, !tbaa !8
  %331 = tail call float @_Z4fminff(float %327, float 0x4415AF1D80000000) #2
  %332 = fmul float %330, %331
  %333 = getelementptr inbounds float, float* %2, i64 %328
  store float %332, float* %333, align 4, !tbaa !8
  %334 = load float, float* %41, align 4, !tbaa !8
  %335 = load float, float* %131, align 4, !tbaa !8
  %336 = fmul float %334, %335
  %337 = getelementptr inbounds float, float* %3, i64 %6
  %338 = load float, float* %337, align 4, !tbaa !8
  %339 = load float, float* %17, align 4, !tbaa !8
  %340 = fmul float %338, %339
  %341 = fdiv float 1.000000e+00, %340, !fpmath !12
  %342 = fmul float %336, %341
  %343 = add i64 %6, 760
  %344 = getelementptr inbounds float, float* %1, i64 %343
  %345 = load float, float* %344, align 4, !tbaa !8
  %346 = tail call float @_Z4fminff(float %342, float 0x4415AF1D80000000) #2
  %347 = fmul float %345, %346
  %348 = getelementptr inbounds float, float* %2, i64 %343
  store float %347, float* %348, align 4, !tbaa !8
  %349 = load float, float* %41, align 4, !tbaa !8
  %350 = load float, float* %131, align 4, !tbaa !8
  %351 = fmul float %349, %350
  %352 = load float, float* %89, align 4, !tbaa !8
  %353 = load float, float* %57, align 4, !tbaa !8
  %354 = fmul float %352, %353
  %355 = fdiv float 1.000000e+00, %354, !fpmath !12
  %356 = fmul float %351, %355
  %357 = add i64 %6, 768
  %358 = getelementptr inbounds float, float* %1, i64 %357
  %359 = load float, float* %358, align 4, !tbaa !8
  %360 = tail call float @_Z4fminff(float %356, float 0x4415AF1D80000000) #2
  %361 = fmul float %359, %360
  %362 = getelementptr inbounds float, float* %2, i64 %357
  store float %361, float* %362, align 4, !tbaa !8
  %363 = load float, float* %41, align 4, !tbaa !8
  %364 = load float, float* %131, align 4, !tbaa !8
  %365 = fmul float %363, %364
  %366 = load float, float* %94, align 4, !tbaa !8
  %367 = load float, float* %113, align 4, !tbaa !8
  %368 = fmul float %366, %367
  %369 = fdiv float 1.000000e+00, %368, !fpmath !12
  %370 = fmul float %365, %369
  %371 = add i64 %6, 776
  %372 = getelementptr inbounds float, float* %1, i64 %371
  %373 = load float, float* %372, align 4, !tbaa !8
  %374 = tail call float @_Z4fminff(float %370, float 0x4415AF1D80000000) #2
  %375 = fmul float %373, %374
  %376 = getelementptr inbounds float, float* %2, i64 %371
  store float %375, float* %376, align 4, !tbaa !8
  %377 = load float, float* %73, align 4, !tbaa !8
  %378 = load float, float* %131, align 4, !tbaa !8
  %379 = fmul float %377, %378
  %380 = load float, float* %89, align 4, !tbaa !8
  %381 = load float, float* %17, align 4, !tbaa !8
  %382 = fmul float %380, %381
  %383 = fdiv float 1.000000e+00, %382, !fpmath !12
  %384 = fmul float %379, %383
  %385 = add i64 %6, 784
  %386 = getelementptr inbounds float, float* %1, i64 %385
  %387 = load float, float* %386, align 4, !tbaa !8
  %388 = tail call float @_Z4fminff(float %384, float 0x4415AF1D80000000) #2
  %389 = fmul float %387, %388
  %390 = getelementptr inbounds float, float* %2, i64 %385
  store float %389, float* %390, align 4, !tbaa !8
  %391 = load float, float* %89, align 4, !tbaa !8
  %392 = load float, float* %131, align 4, !tbaa !8
  %393 = fmul float %391, %392
  %394 = load float, float* %94, align 4, !tbaa !8
  %395 = load float, float* %17, align 4, !tbaa !8
  %396 = fmul float %394, %395
  %397 = fdiv float 1.000000e+00, %396, !fpmath !12
  %398 = fmul float %393, %397
  %399 = add i64 %6, 792
  %400 = getelementptr inbounds float, float* %1, i64 %399
  %401 = load float, float* %400, align 4, !tbaa !8
  %402 = tail call float @_Z4fminff(float %398, float 0x4415AF1D80000000) #2
  %403 = fmul float %401, %402
  %404 = getelementptr inbounds float, float* %2, i64 %399
  store float %403, float* %404, align 4, !tbaa !8
  ret void
}

; Function Attrs: nounwind readnone
declare i64 @_Z13get_global_idj(i32) local_unnamed_addr #1

; Function Attrs: nounwind readnone
declare float @_Z4fminff(float, float) local_unnamed_addr #1

attributes #0 = { nounwind ssp uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+fxsr,+mmx,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+fxsr,+mmx,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nounwind readnone }

!llvm.module.flags = !{!0, !1}
!opencl.ocl.version = !{!2}
!llvm.ident = !{!3}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 1, i32 0}
!3 = !{!"Apple LLVM version 9.1.0 (clang-902.0.39.1)"}
!4 = !{i32 1, i32 1, i32 1, i32 1, i32 0}
!5 = !{!"none", !"none", !"none", !"none", !"none"}
!6 = !{!"float*", !"float*", !"float*", !"float*", !"float"}
!7 = !{!"const", !"const", !"", !"const", !""}
!8 = !{!9, !9, i64 0}
!9 = !{!"float", !10, i64 0}
!10 = !{!"omnipotent char", !11, i64 0}
!11 = !{!"Simple C/C++ TBAA"}
!12 = !{float 2.500000e+00}
