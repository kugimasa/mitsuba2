/*
  This file contains docstrings for the Python bindings.
  Do not edit! These were automatically extracted by mkdoc.py
 */

#define __EXPAND(x)                                      x
#define __COUNT(_1, _2, _3, _4, _5, _6, _7, COUNT, ...)  COUNT
#define __VA_SIZE(...)                                   __EXPAND(__COUNT(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1))
#define __CAT1(a, b)                                     a ## b
#define __CAT2(a, b)                                     __CAT1(a, b)
#define __DOC1(n1)                                       __doc_##n1
#define __DOC2(n1, n2)                                   __doc_##n1##_##n2
#define __DOC3(n1, n2, n3)                               __doc_##n1##_##n2##_##n3
#define __DOC4(n1, n2, n3, n4)                           __doc_##n1##_##n2##_##n3##_##n4
#define __DOC5(n1, n2, n3, n4, n5)                       __doc_##n1##_##n2##_##n3##_##n4##_##n5
#define __DOC6(n1, n2, n3, n4, n5, n6)                   __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6
#define __DOC7(n1, n2, n3, n4, n5, n6, n7)               __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7
#define DOC(...)                                         __EXPAND(__EXPAND(__CAT2(__DOC, __VA_SIZE(__VA_ARGS__)))(__VA_ARGS__))

#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


static const char *__doc_enoki_PCG32 = R"doc(PCG32 pseudorandom number generator proposed by Melissa O'Neill)doc";

static const char *__doc_enoki_PCG32_PCG32 = R"doc(Initialize the pseudorandom number generator with the seed() function)doc";

static const char *__doc_enoki_PCG32_advance =
R"doc(Multi-step advance function (jump-ahead, jump-back)

The method used here is based on Brown, "Random Number Generation with
Arbitrary Stride", Transactions of the American Nuclear Society (Nov.
1994). The algorithm is very similar to fast exponentiation.)doc";

static const char *__doc_enoki_PCG32_inc = R"doc()doc";

static const char *__doc_enoki_PCG32_next_float32 =
R"doc(Generate a single precision floating point value on the interval [0,
1))doc";

static const char *__doc_enoki_PCG32_next_float32_2 = R"doc(Masked version of next_float32)doc";

static const char *__doc_enoki_PCG32_next_float64 =
R"doc(Generate a double precision floating point value on the interval [0,
1)

Remark:
    Since the underlying random number generator produces 32 bit
    output, only the first 32 mantissa bits will be filled (however,
    the resolution is still finer than in next_float(), which only
    uses 23 mantissa bits))doc";

static const char *__doc_enoki_PCG32_next_float64_2 =
R"doc(Generate a double precision floating point value on the interval [0,
1)

Remark:
    Since the underlying random number generator produces 32 bit
    output, only the first 32 mantissa bits will be filled (however,
    the resolution is still finer than in next_float(), which only
    uses 23 mantissa bits))doc";

static const char *__doc_enoki_PCG32_next_uint32 = R"doc(Generate a uniformly distributed unsigned 32-bit random number)doc";

static const char *__doc_enoki_PCG32_next_uint32_2 = R"doc(Masked version of next_uint32)doc";

static const char *__doc_enoki_PCG32_next_uint32_bounded = R"doc(Generate a uniformly distributed integer r, where 0 <= r < bound)doc";

static const char *__doc_enoki_PCG32_next_uint64 = R"doc(Generate a uniformly distributed unsigned 64-bit random number)doc";

static const char *__doc_enoki_PCG32_next_uint64_2 = R"doc(Masked version of next_uint64)doc";

static const char *__doc_enoki_PCG32_next_uint64_bounded = R"doc(Generate a uniformly distributed integer r, where 0 <= r < bound)doc";

static const char *__doc_enoki_PCG32_operator_eq = R"doc(Equality operator)doc";

static const char *__doc_enoki_PCG32_operator_ne = R"doc(Inequality operator)doc";

static const char *__doc_enoki_PCG32_operator_sub = R"doc(Compute the distance between two PCG32 pseudorandom number generators)doc";

static const char *__doc_enoki_PCG32_seed =
R"doc(Seed the pseudorandom number generator

Specified in two parts: a state initializer and a sequence selection
constant (a.k.a. stream id))doc";

static const char *__doc_enoki_PCG32_shuffle =
R"doc(Draw uniformly distributed permutation and permute the given container

From: Knuth, TAoCP Vol. 2 (3rd 3d), Section 3.4.2)doc";

static const char *__doc_enoki_PCG32_state = R"doc()doc";

static const char *__doc_enoki_operator_lshift = R"doc(Prints the canonical representation of a PCG32 object.)doc";

static const char *__doc_mitsuba_AnimatedTransform =
R"doc(Encapsulates an animated 4x4 homogeneous coordinate transformation

The animation is stored as keyframe animation with linear segments.
The implementation performs a polar decomposition of each keyframe
into a 3x3 scale/shear matrix, a rotation quaternion, and a
translation vector. These will all be interpolated independently at
eval time.)doc";

static const char *__doc_mitsuba_AnimatedTransform_AnimatedTransform = R"doc(Create an empty animated transform)doc";

static const char *__doc_mitsuba_AnimatedTransform_AnimatedTransform_2 =
R"doc(Create a constant "animated" transform. The provided transformation
will be used as long as no keyframes are specified. However, it will
be overwritten as soon as the first keyframe is appended.)doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe = R"doc(Represents a single keyframe in an animated transform)doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_Keyframe = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_operator_eq = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_operator_ne = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_quat = R"doc(Rotation quaternion)doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_scale = R"doc(3x3 scale/shear matrix)doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_time = R"doc(Time value associated with this keyframe)doc";

static const char *__doc_mitsuba_AnimatedTransform_Keyframe_trans = R"doc(3D translation)doc";

static const char *__doc_mitsuba_AnimatedTransform_append = R"doc(Append a keyframe to the current animated transform)doc";

static const char *__doc_mitsuba_AnimatedTransform_append_2 = R"doc(Append a keyframe to the current animated transform)doc";

static const char *__doc_mitsuba_AnimatedTransform_class = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_eval = R"doc(Look up an interpolated transform at the given time)doc";

static const char *__doc_mitsuba_AnimatedTransform_eval_2 = R"doc(Vectorized version of eval())doc";

static const char *__doc_mitsuba_AnimatedTransform_eval_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval())doc";

static const char *__doc_mitsuba_AnimatedTransform_eval_impl = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_has_scale = R"doc(Determine whether the transformation involves any kind of scaling)doc";

static const char *__doc_mitsuba_AnimatedTransform_m_keyframes = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_m_transform = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_operator_array = R"doc(Return a Keyframe data structure)doc";

static const char *__doc_mitsuba_AnimatedTransform_operator_eq = R"doc(Equality comparison operator)doc";

static const char *__doc_mitsuba_AnimatedTransform_operator_ne = R"doc()doc";

static const char *__doc_mitsuba_AnimatedTransform_size = R"doc(Return the number of keyframes)doc";

static const char *__doc_mitsuba_AnimatedTransform_to_string = R"doc(Return a human-readable summary of this bitmap)doc";

static const char *__doc_mitsuba_AnimatedTransform_translation_bounds =
R"doc(Return an axis-aligned box bounding the amount of translation
throughout the animation sequence)doc";

static const char *__doc_mitsuba_Appender =
R"doc(This class defines an abstract destination for logging-relevant
information)doc";

static const char *__doc_mitsuba_Appender_append = R"doc(Append a line of text with the given log level)doc";

static const char *__doc_mitsuba_Appender_class = R"doc()doc";

static const char *__doc_mitsuba_Appender_log_progress =
R"doc(Process a progress message

Parameter ``progress``:
    Percentage value in [0, 100]

Parameter ``name``:
    Title of the progress message

Parameter ``formatted``:
    Formatted string representation of the message

Parameter ``eta``:
    Estimated time until 100% is reached.

Parameter ``ptr``:
    Custom pointer payload. This is used to express the context of a
    progress message. When rendering a scene, it will usually contain
    a pointer to the associated ``RenderJob``.)doc";

static const char *__doc_mitsuba_ArgParser =
R"doc(Minimal command line argument parser

This class provides a minimal cross-platform command line argument
parser in the spirit of to GNU getopt. Both short and long arguments
that accept an optional extra value are supported.

The typical usage is

```
ArgParser p;
auto arg0 = p.register("--myParameter");
auto arg1 = p.register("-f", true);
p.parse(argc, argv);
if (*arg0)
    std::cout << "Got --myParameter" << std::endl;
if (*arg1)
    std::cout << "Got -f " << arg1->value() << std::endl;
```)doc";

static const char *__doc_mitsuba_ArgParser_Arg = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_Arg =
R"doc(Construct a new argument with the given prefixes

Parameter ``prefixes``:
    A list of command prefixes (i.e. {"-f", "--fast"})

Parameter ``extra``:
    Indicates whether the argument accepts an extra argument value)doc";

static const char *__doc_mitsuba_ArgParser_Arg_Arg_2 = R"doc(Copy constructor (does not copy argument values))doc";

static const char *__doc_mitsuba_ArgParser_Arg_append = R"doc(Append a argument value at the end)doc";

static const char *__doc_mitsuba_ArgParser_Arg_as_float = R"doc(Return the extra argument associated with this argument)doc";

static const char *__doc_mitsuba_ArgParser_Arg_as_int = R"doc(Return the extra argument associated with this argument)doc";

static const char *__doc_mitsuba_ArgParser_Arg_as_string = R"doc(Return the extra argument associated with this argument)doc";

static const char *__doc_mitsuba_ArgParser_Arg_count = R"doc(Specifies how many times the argument has been specified)doc";

static const char *__doc_mitsuba_ArgParser_Arg_extra = R"doc(Specifies whether the argument takes an extra value)doc";

static const char *__doc_mitsuba_ArgParser_Arg_m_extra = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_m_next = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_m_prefixes = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_m_present = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_m_value = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_Arg_next =
R"doc(For arguments that are specified multiple times, advance to the next
one.)doc";

static const char *__doc_mitsuba_ArgParser_Arg_operator_bool = R"doc(Returns whether the argument has been specified)doc";

static const char *__doc_mitsuba_ArgParser_add =
R"doc(Register a new argument with the given prefix

Parameter ``prefix``:
    A single command prefix (i.e. "-f")

Parameter ``extra``:
    Indicates whether the argument accepts an extra argument value)doc";

static const char *__doc_mitsuba_ArgParser_add_2 =
R"doc(Register a new argument with the given list of prefixes

Parameter ``prefixes``:
    A list of command prefixes (i.e. {"-f", "--fast"})

Parameter ``extra``:
    Indicates whether the argument accepts an extra argument value)doc";

static const char *__doc_mitsuba_ArgParser_executable_name = R"doc(Return the name of the invoked application executable)doc";

static const char *__doc_mitsuba_ArgParser_m_args = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_m_executable_name = R"doc()doc";

static const char *__doc_mitsuba_ArgParser_parse = R"doc(Parse the given set of command line arguments)doc";

static const char *__doc_mitsuba_ArgParser_parse_2 = R"doc(Parse the given set of command line arguments)doc";

static const char *__doc_mitsuba_AtomicFloat =
R"doc(Atomic floating point data type

The class implements an an atomic floating point data type (which is
not possible with the existing overloads provided by ``std::atomic``).
It internally casts floating point values to an integer storage format
and uses atomic integer compare and exchange operations to perform
changes.)doc";

static const char *__doc_mitsuba_AtomicFloat_AtomicFloat = R"doc(Initialize the AtomicFloat with a given floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_do_atomic =
R"doc(Apply a FP operation atomically (verified that this will be nicely
inlined in the above operators))doc";

static const char *__doc_mitsuba_AtomicFloat_m_bits = R"doc()doc";

static const char *__doc_mitsuba_AtomicFloat_operator_T0 = R"doc(Convert the AtomicFloat into a normal floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_operator_assign = R"doc(Overwrite the AtomicFloat with a floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_operator_iadd = R"doc(Atomically add a floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_operator_idiv = R"doc(Atomically divide by a floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_operator_imul = R"doc(Atomically multiply by a floating point value)doc";

static const char *__doc_mitsuba_AtomicFloat_operator_isub = R"doc(Atomically subtract a floating point value)doc";

static const char *__doc_mitsuba_BSDF =
R"doc(Abstract BSDF base-class.

This class provides an abstract interface to all %BSDF plugins in
Mitsuba. It exposes functions for evaluating and sampling the model.
Smooth two-dimensional density functions, as well as degenerate one-
dimensional and discrete densities are all handled within the same
framework.

For improved flexibility with respect to the various rendering
algorithms, this class can sample and evaluate a complete BSDF, but it
also allows to pick and choose individual components of multi-lobed
BSDFs based on their properties and component indices. This selection
is specified using a context data structure that is provided along
with every operation.

See also:
    BSDFContext

See also:
    BSDFSample)doc";

static const char *__doc_mitsuba_BSDFContext =
R"doc(Context data structure for BSDF evaluation and sampling

BSDF models in Mitsuba can be queried and sampled using a variety of
different modes -- for instance, a rendering algorithm can indicate
whether radiance or importance is being transported, and it can also
restrict evaluation and sampling to a subset of lobes in a a multi-
lobe BSDF model.

The BSDFContext data structure encodes these preferences and is
supplied to most BSDF methods.)doc";

static const char *__doc_mitsuba_BSDFContext_BSDFContext = R"doc(//! @})doc";

static const char *__doc_mitsuba_BSDFContext_BSDFContext_2 = R"doc()doc";

static const char *__doc_mitsuba_BSDFContext_component =
R"doc(Integer value of requested BSDF component index to be
sampled/evaluated.)doc";

static const char *__doc_mitsuba_BSDFContext_is_enabled =
R"doc(Checks whether a given BSDF component type and BSDF component index
are enabled in this context.)doc";

static const char *__doc_mitsuba_BSDFContext_mode = R"doc(Transported mode (radiance or importance))doc";

static const char *__doc_mitsuba_BSDFContext_reverse =
R"doc(Reverse the direction of light transport in the record

This updates the transport mode (radiance to importance and vice
versa).)doc";

static const char *__doc_mitsuba_BSDFContext_type_mask = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample = R"doc(Data structure holding the result of BSDF sampling operations.)doc";

static const char *__doc_mitsuba_BSDFSample_BSDFSample =
R"doc(Given a surface interaction an an incident/exitant direction pair (wi,
wo), create a query record to evaluate the BSDF or its sampling
density.

By default, all components will be sampled regardless of what measure
they live on.

Parameter ``wo``:
    An outgoing direction in local coordinates. This should be a
    normalized direction vector that points *away* from the scattering
    event.)doc";

static const char *__doc_mitsuba_BSDFSample_BSDFSample_2 = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_BSDFSample_3 = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_BSDFSample_4 = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_BSDFSample_5 = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_eta = R"doc(Relative index of refraction in the sampled direction)doc";

static const char *__doc_mitsuba_BSDFSample_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_BSDFSample_pdf = R"doc(Probability density at the sample)doc";

static const char *__doc_mitsuba_BSDFSample_sampled_component = R"doc(Stores the component index that was sampled by BSDF::sample())doc";

static const char *__doc_mitsuba_BSDFSample_sampled_type = R"doc(Stores the component type that was sampled by BSDF::sample())doc";

static const char *__doc_mitsuba_BSDFSample_wo = R"doc(Normalized outgoing direction in local coordinates)doc";

static const char *__doc_mitsuba_BSDF_BSDF = R"doc(//! @})doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations = R"doc(Convenient combinations of flags from EBSDFType)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EAll = R"doc(Any kind of scattering)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EDelta = R"doc(Scattering into a discrete set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EDelta1D = R"doc(Scattering into a 1D space of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EDiffuse = R"doc(Diffuse scattering into a 2D set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EGlossy = R"doc(Non-diffuse scattering into a 2D set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_EReflection =
R"doc(Any reflection component (scattering into discrete, 1D, or 2D set of
directions))doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_ESmooth = R"doc(Scattering into a 2D set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlagCombinations_ETransmission =
R"doc(Any transmission component (scattering into discrete, 1D, or 2D set of
directions))doc";

static const char *__doc_mitsuba_BSDF_EFlags =
R"doc(This list of flags is used to classify the different types of lobes
that are implemented in a BSDF instance.

They are also useful for picking out individual components by setting
combinations in BSDFContext::type_mask.)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EAnisotropic = R"doc(The lobe is not invariant to rotation around the normal)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EBackSide = R"doc(Supports interactions on the back-facing side)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDelta1DReflection = R"doc(Reflection into a 1D space of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDelta1DTransmission = R"doc(Transmission into a 1D space of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDeltaReflection = R"doc(Reflection into a discrete set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDeltaTransmission = R"doc(Transmission into a discrete set of directions)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDiffuseReflection = R"doc(Ideally diffuse reflection)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EDiffuseTransmission = R"doc(Ideally diffuse transmission)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EFrontSide = R"doc(Supports interactions on the front-facing side)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EGlossyReflection = R"doc(Glossy reflection)doc";

static const char *__doc_mitsuba_BSDF_EFlags_EGlossyTransmission = R"doc(Glossy transmission)doc";

static const char *__doc_mitsuba_BSDF_EFlags_ENeedsDifferentials = R"doc(Does the implementation require access to texture-space differentials)doc";

static const char *__doc_mitsuba_BSDF_EFlags_ENonSymmetric = R"doc(Flags non-symmetry (e.g. transmission in dielectric materials))doc";

static const char *__doc_mitsuba_BSDF_EFlags_ENull = R"doc('null' scattering event, i.e. particles do not undergo deflection)doc";

static const char *__doc_mitsuba_BSDF_EFlags_ESpatiallyVarying = R"doc(The BSDF depends on the UV coordinates)doc";

static const char *__doc_mitsuba_BSDF_class = R"doc()doc";

static const char *__doc_mitsuba_BSDF_component_count = R"doc(Number of components this BSDF is comprised of.)doc";

static const char *__doc_mitsuba_BSDF_eval =
R"doc(Evaluate the BSDF f(wi, wo) or its adjoint version f^{*}(wi, wo) and
multiply by the cosine foreshortening term.

Based on the information in the supplied query context ``ctx``, this
method will either evaluate the entire BSDF or query individual
components (e.g. the diffuse lobe). Only smooth (i.e. non Dirac-delta)
components are supported: calling ``eval``() on a perfectly specular
material will return zero.

Note that the incident direction does not need to be explicitly
specified. It is obtained from the field ``si.wi``.

Parameter ``ctx``:
    A context data structure describing which lobes to evalute, and
    whether radiance or importance are being transported.

Parameter ``si``:
    A surface interaction data structure describing the underlying
    surface position. The incident direction is obtained from the
    field ``si.wi``.

Parameter ``wo``:
    The outgoing direction)doc";

static const char *__doc_mitsuba_BSDF_eval_2 = R"doc(Vectorized version of eval())doc";

static const char *__doc_mitsuba_BSDF_eval_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval())doc";

static const char *__doc_mitsuba_BSDF_eval_pol =
R"doc(Polarized version of eval()

The resulting MuellerMatrix has the following coordinate system:
CoordinateSystem(w_i_local) -> CoordinateSystem(w_o_local)
SurfaceInteraction::to_world_mueller can be used to transform this
matrix into world space. This function behaves in a very similar way
to the unpolarized function so the documentation there applies.

Returns:
    Mueller matrix of BSDF values (multiplied by the cosine
    foreshortening factor when a non-delta component is sampled). A
    zero spectrum indicates that sampling failed.

The Mueller matrix has the following coordinate system:
CoordinateSystem(w_i_local) -> CoordinateSystem(w_o_local).)doc";

static const char *__doc_mitsuba_BSDF_eval_pol_2 = R"doc(Vectorized version of eval_pol())doc";

static const char *__doc_mitsuba_BSDF_eval_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval_pol())doc";

static const char *__doc_mitsuba_BSDF_flags = R"doc(Flags for all components combined.)doc";

static const char *__doc_mitsuba_BSDF_flags_2 = R"doc(Flags for a specific component of this BSDF.)doc";

static const char *__doc_mitsuba_BSDF_m_components = R"doc(Flags for each component of this BSDF.)doc";

static const char *__doc_mitsuba_BSDF_m_flags = R"doc(Combined flags for all components of this BSDF.)doc";

static const char *__doc_mitsuba_BSDF_needs_differentials = R"doc(Does the implementation require access to texture-space differentials?)doc";

static const char *__doc_mitsuba_BSDF_pdf =
R"doc(Compute the probability per unit solid angle of sampling a given
direction

This method provides access to the probability density that would
result when supplying the same BSDF context and surface interaction
data structures to the sample() method. It correctly handles changes
in probability when only a subset of the components is chosen for
sampling (this can be done using the BSDFContext::component and
BSDFCOntext::type_mask fields).

Note that the incident direction does not need to be explicitly
specified. It is obtained from the field ``si.wi``.

Parameter ``ctx``:
    A context data structure describing which lobes to evalute, and
    whether radiance or importance are being transported.

Parameter ``si``:
    A surface interaction data structure describing the underlying
    surface position. The incident direction is obtained from the
    field ``si.wi``.

Parameter ``wo``:
    The outgoing direction)doc";

static const char *__doc_mitsuba_BSDF_pdf_2 = R"doc(Vectorized version of pdf())doc";

static const char *__doc_mitsuba_BSDF_pdf_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
pdf())doc";

static const char *__doc_mitsuba_BSDF_sample =
R"doc(Importance sample the BSDF model

The function returns a sample data structure along with the importance
weight, which is the value of the BSDF divided by the probability
density, and multiplied by the cosine foreshortening factor (if needed
--- it is omitted for degenerate BSDFs like smooth
mirrors/dielectrics).

If the supplied context data strutcures selects subset of components
in a multi-lobe BRDF model, the sampling is restricted to this subset.
Depending on the provided transport type, either the BSDF or its
adjoint version is sampled.

When sampling a continuous/non-delta component, this method also
multiplies by the cosine foreshorening factor with respect to the
sampled direction.

Parameter ``ctx``:
    A context data structure describing which lobes to sample, and
    whether radiance or importance are being transported.

Parameter ``si``:
    A surface interaction data structure describing the underlying
    surface position. The incident direction is obtained from the
    field ``si.wi``.

Parameter ``sample1``:
    A uniformly distributed sample on $[0,1]$. It is used to select
    the BSDF lobe in multi-lobe models.

Parameter ``sample2``:
    A uniformly distributed sample on $[0,1]^2$. It is used to
    generate the sampled direction.

Returns:
    A pair (bs, value) consisting of

bs: Sampling record, indicating the sampled direction, PDF values and
other information. The contents are undefined if sampling failed.

value: The BSDF value (multiplied by the cosine foreshortening factor
when a non-delta component is sampled). A zero spectrum indicates that
sampling failed.)doc";

static const char *__doc_mitsuba_BSDF_sample_2 = R"doc(Vectorized version of sample())doc";

static const char *__doc_mitsuba_BSDF_sample_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample())doc";

static const char *__doc_mitsuba_BSDF_sample_pol =
R"doc(Polarized version of sample()

Since there is no special polarized importance sampling this method
behaves very similar to the standard one.

Returns:
    A pair (bs, value) consisting of

bs: Sampling record, indicating the sampled direction, PDF values and
other information. The contents are undefined if sampling failed.

value: Mueller matrix of BSDF values (multiplied by the cosine
foreshortening factor when a non-delta component is sampled). A zero
spectrum indicates that sampling failed.

The Mueller matrix has the following coordinate system:
CoordinateSystem(w_i_local) -> CoordinateSystem(w_o_local).)doc";

static const char *__doc_mitsuba_BSDF_sample_pol_2 = R"doc(Vectorized version of sample_pol())doc";

static const char *__doc_mitsuba_BSDF_sample_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_pol())doc";

static const char *__doc_mitsuba_BSDF_to_string = R"doc(Return a human-readable representation of the BSDF)doc";

static const char *__doc_mitsuba_Bitmap =
R"doc(General-purpose bitmap class with read and write support for several
common file formats.

This class handles loading of PNG, JPEG, BMP, TGA, as well as OpenEXR
files, and it supports writing of PNG, JPEG and OpenEXR files.

PNG and OpenEXR files are optionally annotated with string-valued
metadata, and the gamma setting can be stored as well. Please see the
class methods and enumerations for further detail.)doc";

static const char *__doc_mitsuba_Bitmap_Bitmap =
R"doc(Create a bitmap of the specified type and allocate the necessary
amount of memory

Parameter ``pixel_format``:
    Specifies the pixel format (e.g. RGBA or Luminance-only)

Parameter ``component_format``:
    Specifies how the per-pixel components are encoded (e.g. unsigned
    8 bit integers or 32-bit floating point values). The component
    format Struct::EFloat will be translated to the corresponding
    compile-time precision type (EFloat32 or EFloat64).

Parameter ``size``:
    Specifies the horizontal and vertical bitmap size in pixels

Parameter ``channel_count``:
    Channel count of the image. This parameter is only required when
    ``pfmt`` = EMultiChannel

Parameter ``data``:
    External pointer to the image data. If set to ``nullptr``, the
    implementation will allocate memory itself.)doc";

static const char *__doc_mitsuba_Bitmap_Bitmap_2 =
R"doc(Load a bitmap from an arbitrary stream data source

Parameter ``stream``:
    Pointer to an arbitrary stream data source

Parameter ``format``:
    File format to be read (PNG/EXR/Auto-detect ...))doc";

static const char *__doc_mitsuba_Bitmap_Bitmap_3 =
R"doc(Load a bitmap from a given filename

Parameter ``path``:
    Name of the file to be loaded

Parameter ``format``:
    File format to be read (PNG/EXR/Auto-detect ...))doc";

static const char *__doc_mitsuba_Bitmap_Bitmap_4 = R"doc(Copy constructor (copies the image contents))doc";

static const char *__doc_mitsuba_Bitmap_Bitmap_5 = R"doc(Move constructor)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat = R"doc(Supported file formats)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EAuto =
R"doc(Automatically detect the file format

Note: this flag only applies when loading a file. In this case, the
source stream must support the ``seek``() operation.)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EBMP =
R"doc(Windows Bitmap file format

The following is supported:

* Loading of uncompressed 8-bit luminance and RGBA bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EJPEG =
R"doc(Joint Photographic Experts Group file format

The following is supported:

* Loading and saving of 8 bit per component RGB and luminance bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EOpenEXR =
R"doc(OpenEXR high dynamic range file format developed by Industrial Light &
Magic (ILM)

The following is supported:

* Loading and saving of Eloat16 / EFloat32/ EUInt32 bitmaps with all
supported RGB/Luminance/Alpha combinations

* Loading and saving of spectral bitmaps</tt>

* Loading and saving of XYZ tristimulus bitmaps</tt>

* Loading and saving of string-valued metadata fields

The following is *not* supported:

* Saving of tiled images, tile-based read access

* Display windows that are different than the data window

* Loading of spectrum-valued bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EPFM =
R"doc(PFM (Portable Float Map) image format

The following is supported

* Loading and saving of EFloat32 - based Luminance or RGB bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EPNG =
R"doc(Portable network graphics

The following is supported:

* Loading and saving of 8/16-bit per component bitmaps for all pixel
formats (EY, EYA, ERGB, ERGBA)

* Loading and saving of 1-bit per component mask bitmaps

* Loading and saving of string-valued metadata fields)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_EPPM =
R"doc(PPM (Portable Pixel Map) image format

The following is supported

* Loading and saving of EUInt8 and EUInt16 - based RGB bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_ERGBE =
R"doc(RGBE image format by Greg Ward

The following is supported

* Loading and saving of EFloat32 - based RGB bitmaps)doc";

static const char *__doc_mitsuba_Bitmap_EFileFormat_ETGA =
R"doc(Truevision Advanced Raster Graphics Array file format

The following is supported:

* Loading of uncompressed 8-bit RGB/RGBA files)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat =
R"doc(This enumeration lists all pixel format types supported by the Bitmap
class. This both determines the number of channels, and how they
should be interpreted)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EMultiChannel = R"doc(Arbitrary multi-channel bitmap without a fixed interpretation)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_ERGB = R"doc(RGB bitmap)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_ERGBA = R"doc(RGB bitmap + alpha channel)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_ERGBAW = R"doc(RGB bitmap + alpha channel + weight)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EXYZ = R"doc(XYZ tristimulus bitmap)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EXYZA = R"doc(XYZ tristimulus + alpha channel)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EXYZAW = R"doc(XYZ tristimulus + alpha channel + weight)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EY = R"doc(Single-channel luminance bitmap)doc";

static const char *__doc_mitsuba_Bitmap_EPixelFormat_EYA = R"doc(Two-channel luminance + alpha bitmap)doc";

static const char *__doc_mitsuba_Bitmap_accumulate =
R"doc(Accumulate the contents of another bitmap into the region with the
specified offset

Out-of-bounds regions are safely ignored. It is assumed that ``bitmap
!= this``.

Remark:
    This function throws an exception when the bitmaps use different
    component formats or channels, or when the component format is
    EBitmask.)doc";

static const char *__doc_mitsuba_Bitmap_accumulate_2 =
R"doc(Accumulate the contents of another bitmap into the region with the
specified offset

This convenience function calls the main ``accumulate()``
implementation with ``size`` set to ``bitmap->size()`` and
``source_offset`` set to zero. Out-of-bounds regions are ignored. It
is assumed that ``bitmap != this``.

Remark:
    This function throws an exception when the bitmaps use different
    component formats or channels, or when the component format is
    EBitmask.)doc";

static const char *__doc_mitsuba_Bitmap_accumulate_3 =
R"doc(Accumulate the contents of another bitmap into the region with the
specified offset

This convenience function calls the main ``accumulate()``
implementation with ``size`` set to ``bitmap->size()`` and
``source_offset`` and ``target_offset``tt> set to zero. Out-of-bounds
regions are ignored. It is assumed that ``bitmap != this``.

Remark:
    This function throws an exception when the bitmaps use different
    component formats or channels, or when the component format is
    EBitmask.)doc";

static const char *__doc_mitsuba_Bitmap_buffer_size = R"doc(Return the bitmap size in bytes (excluding metadata))doc";

static const char *__doc_mitsuba_Bitmap_bytes_per_pixel = R"doc(Return the number bytes of storage used per pixel)doc";

static const char *__doc_mitsuba_Bitmap_channel_count = R"doc(Return the number of channels used by this bitmap)doc";

static const char *__doc_mitsuba_Bitmap_class = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_clear = R"doc(Clear the bitmap to zero)doc";

static const char *__doc_mitsuba_Bitmap_component_format = R"doc(Return the component format of this bitmap)doc";

static const char *__doc_mitsuba_Bitmap_convert =
R"doc(Convert the bitmap into another pixel and/or component format

This helper function can be used to efficiently convert a bitmap
between different underlying representations. For instance, it can
translate a uint8 sRGB bitmap to a linear float32 XYZ bitmap based on
half-, single- or double-precision floating point-backed storage.

This function roughly does the following:

* For each pixel and channel, it converts the associated value into a
normalized linear-space form (any gamma of the source bitmap is
removed)

* The multiplier and gamma correction specified in ``targetGamma`` is
applied

* The corrected value is clamped against the representable range of
the desired component format.

* The clamped gamma-corrected value is then written to the new bitmap

If the pixel formats differ, this function will also perform basic
conversions (e.g. spectrum to rgb, luminance to uniform spectrum
values, etc.)

Note that the alpha channel is assumed to be linear in both the source
and target bitmap, hence it won't be affected by any gamma-related
transformations.

Remark:
    This ``convert()`` variant usually returns a new bitmap instance.
    When the conversion would just involve copying the original
    bitmap, the function becomes a no-op and returns the current
    instance.

pixel_format Specifies the desired pixel format

component_format Specifies the desired component format

srgb_gamma Specifies whether a sRGB gamma ramp should be applied to
the ouutput values.)doc";

static const char *__doc_mitsuba_Bitmap_convert_2 = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_data = R"doc(Return a pointer to the underlying bitmap storage)doc";

static const char *__doc_mitsuba_Bitmap_data_2 = R"doc(Return a pointer to the underlying bitmap storage)doc";

static const char *__doc_mitsuba_Bitmap_has_alpha = R"doc(Return whether this image has an alpha channel)doc";

static const char *__doc_mitsuba_Bitmap_height = R"doc(Return the bitmap's height in pixels)doc";

static const char *__doc_mitsuba_Bitmap_m_component_format = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_data = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_metadata = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_owns_data = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_pixel_format = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_size = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_srgb_gamma = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_m_struct = R"doc()doc";

static const char *__doc_mitsuba_Bitmap_metadata = R"doc(Return a Properties object containing the image metadata)doc";

static const char *__doc_mitsuba_Bitmap_metadata_2 =
R"doc(Return a Properties object containing the image metadata (const
version))doc";

static const char *__doc_mitsuba_Bitmap_operator_eq = R"doc(Equality comparison operator)doc";

static const char *__doc_mitsuba_Bitmap_operator_ne = R"doc(Inequality comparison operator)doc";

static const char *__doc_mitsuba_Bitmap_pixel_count = R"doc(Return the total number of pixels)doc";

static const char *__doc_mitsuba_Bitmap_pixel_format = R"doc(Return the pixel format of this bitmap)doc";

static const char *__doc_mitsuba_Bitmap_read = R"doc(Read a file from a stream)doc";

static const char *__doc_mitsuba_Bitmap_read_bmp = R"doc(Read a file encoded using the BMP file format)doc";

static const char *__doc_mitsuba_Bitmap_read_jpeg = R"doc(Read a file encoded using the JPEG file format)doc";

static const char *__doc_mitsuba_Bitmap_read_openexr = R"doc(Read a file encoded using the OpenEXR file format)doc";

static const char *__doc_mitsuba_Bitmap_read_pfm = R"doc(Read a file encoded using the PFM file format)doc";

static const char *__doc_mitsuba_Bitmap_read_png = R"doc(Read a file encoded using the PNG file format)doc";

static const char *__doc_mitsuba_Bitmap_read_ppm = R"doc(Read a file encoded using the PPM file format)doc";

static const char *__doc_mitsuba_Bitmap_read_rgbe = R"doc(Read a file encoded using the RGBE file format)doc";

static const char *__doc_mitsuba_Bitmap_read_tga = R"doc(Read a file encoded using the TGA file format)doc";

static const char *__doc_mitsuba_Bitmap_rebuild_struct = R"doc(Rebuild the 'm_struct' field based on the pixel format etc.)doc";

static const char *__doc_mitsuba_Bitmap_resample =
R"doc(Up- or down-sample this image to a different resolution

Uses the provided reconstruction filter and accounts for the requested
horizontal and vertical boundary conditions when looking up data
outside of the input domain.

A minimum and maximum image value can be specified to prevent to
prevent out-of-range values that are created by the resampling
process.

The optional ``temp`` parameter can be used to pass an image of
resolution ``Vector2s(target->width(), this->height())`` to avoid
intermediate memory allocations.

Parameter ``target``:
    Pre-allocated bitmap of the desired target resolution

Parameter ``rfilter``:
    A separable image reconstruction filter (default: 2-lobe Lanczos
    filter)

Parameter ``bch``:
    Horizontal and vertical boundary conditions (default: clamp)

Parameter ``clamp``:
    Filtered image pixels will be clamped to the following range.
    Default: -infinity..infinity (i.e. no clamping is used)

Parameter ``temp``:
    Optional: image for intermediate computations)doc";

static const char *__doc_mitsuba_Bitmap_resample_2 =
R"doc(Up- or down-sample this image to a different resolution

This version is similar to the above resample() function -- the main
difference is that it does not work with preallocated bitmaps and
takes the desired output resolution as first argument.

Uses the provided reconstruction filter and accounts for the requested
horizontal and vertical boundary conditions when looking up data
outside of the input domain.

A minimum and maximum image value can be specified to prevent to
prevent out-of-range values that are created by the resampling
process.

Parameter ``res``:
    Desired output resolution

Parameter ``rfilter``:
    A separable image reconstruction filter (default: 2-lobe Lanczos
    filter)

Parameter ``bch``:
    Horizontal and vertical boundary conditions (default: clamp)

Parameter ``clamp``:
    Filtered image pixels will be clamped to the following range.
    Default: -infinity..infinity (i.e. no clamping is used))doc";

static const char *__doc_mitsuba_Bitmap_set_metadata = R"doc(Set the a Properties object containing the image metadata)doc";

static const char *__doc_mitsuba_Bitmap_set_srgb_gamma = R"doc(Specify whether the bitmap uses an sRGB gamma encoding)doc";

static const char *__doc_mitsuba_Bitmap_size = R"doc(Return the bitmap dimensions in pixels)doc";

static const char *__doc_mitsuba_Bitmap_srgb_gamma = R"doc(Return whether the bitmap uses an sRGB gamma encoding)doc";

static const char *__doc_mitsuba_Bitmap_static_initialization =
R"doc(Static initialization of bitmap-related data structures (thread pools,
etc.))doc";

static const char *__doc_mitsuba_Bitmap_static_shutdown = R"doc(Free the resources used by static_initialization())doc";

static const char *__doc_mitsuba_Bitmap_struct = R"doc(Return a ``Struct`` instance describing the contents of the bitmap)doc";

static const char *__doc_mitsuba_Bitmap_to_string = R"doc(Return a human-readable summary of this bitmap)doc";

static const char *__doc_mitsuba_Bitmap_uint8_data = R"doc(Return a pointer to the underlying data)doc";

static const char *__doc_mitsuba_Bitmap_uint8_data_2 = R"doc(Return a pointer to the underlying data (const))doc";

static const char *__doc_mitsuba_Bitmap_vflip = R"doc(Vertically flip the bitmap)doc";

static const char *__doc_mitsuba_Bitmap_width = R"doc(Return the bitmap's width in pixels)doc";

static const char *__doc_mitsuba_Bitmap_write =
R"doc(Write an encoded form of the bitmap to a stream using the specified
file format

Parameter ``stream``:
    Target stream that will receive the encoded output

Parameter ``format``:
    Target file format (EOpenEXR, EPNG, EOpenEXR, etc.) Detected from
    the filename by default.

Parameter ``quality``:
    Depending on the file format, this parameter takes on a slightly
    different meaning:

* PNG images: Controls how much libpng will attempt to compress the
output (with 1 being the lowest and 9 denoting the highest
compression). The default argument uses the compression level 5.

* JPEG images: denotes the desired quality (between 0 and 100). The
default argument (-1) uses the highest quality (100).

* OpenEXR images: denotes the quality level of the DWAB compressor,
with higher values corresponding to a lower quality. A value of 45 is
recommended as the default for lossy compression. The default argument
(-1) causes the implementation to switch to the lossless PIZ
compressor.)doc";

static const char *__doc_mitsuba_Bitmap_write_2 =
R"doc(Write an encoded form of the bitmap to a file using the specified file
format

Parameter ``stream``:
    Target stream that will receive the encoded output

Parameter ``format``:
    Target file format (EOpenEXR, EPNG, EOpenEXR, etc.) Detected from
    the filename by default.

Parameter ``quality``:
    Depending on the file format, this parameter takes on a slightly
    different meaning:

* PNG images: Controls how much libpng will attempt to compress the
output (with 1 being the lowest and 9 denoting the highest
compression). The default argument uses the compression level 5.

* JPEG images: denotes the desired quality (between 0 and 100). The
default argument (-1) uses the highest quality (100).

* OpenEXR images: denotes the quality level of the DWAB compressor,
with higher values corresponding to a lower quality. A value of 45 is
recommended as the default for lossy compression. The default argument
(-1) causes the implementation to switch to the lossless PIZ
compressor.)doc";

static const char *__doc_mitsuba_Bitmap_write_jpeg = R"doc(Save a file using the JPEG file format)doc";

static const char *__doc_mitsuba_Bitmap_write_openexr = R"doc(Write a file using the OpenEXR file format)doc";

static const char *__doc_mitsuba_Bitmap_write_pfm = R"doc(Save a file using the PFM file format)doc";

static const char *__doc_mitsuba_Bitmap_write_png = R"doc(Save a file using the PNG file format)doc";

static const char *__doc_mitsuba_Bitmap_write_ppm = R"doc(Save a file using the PPM file format)doc";

static const char *__doc_mitsuba_Bitmap_write_rgbe = R"doc(Save a file using the RGBE file format)doc";

static const char *__doc_mitsuba_BoundingBox =
R"doc(Generic n-dimensional bounding box data structure

Maintains a minimum and maximum position along each dimension and
provides various convenience functions for querying and modifying
them.

This class is parameterized by the underlying point data structure,
which permits the use of different scalar types and dimensionalities,
e.g.

```
BoundingBox<Point3i> integer_bbox(Point3i(0, 1, 3), Point3i(4, 5, 6));
BoundingBox<Point2d> double_bbox(Point2d(0.0, 1.0), Point2d(4.0, 5.0));
```

Template parameter ``T``:
    The underlying point data type (e.g. ``Point2d``))doc";

static const char *__doc_mitsuba_BoundingBox_BoundingBox =
R"doc(Create a new invalid bounding box

Initializes the components of the minimum and maximum position to
$\infty$ and $-\infty$, respectively.)doc";

static const char *__doc_mitsuba_BoundingBox_BoundingBox_2 = R"doc(Create a collapsed bounding box from a single point)doc";

static const char *__doc_mitsuba_BoundingBox_BoundingBox_3 = R"doc(Create a bounding box from two positions)doc";

static const char *__doc_mitsuba_BoundingBox_BoundingBox_4 =
R"doc(Create a bounding box from a smaller type (e.g. vectorized from
scalar).)doc";

static const char *__doc_mitsuba_BoundingBox_bounding_sphere = R"doc(Create a bounding sphere, which contains the axis-aligned box)doc";

static const char *__doc_mitsuba_BoundingBox_center = R"doc(Return the center point)doc";

static const char *__doc_mitsuba_BoundingBox_clip = R"doc(Clip this bounding box to another bounding box)doc";

static const char *__doc_mitsuba_BoundingBox_collapsed =
R"doc(Check whether this bounding box has collapsed to a point, line, or
plane)doc";

static const char *__doc_mitsuba_BoundingBox_contains =
R"doc(Check whether a point lies *on* or *inside* the bounding box

Parameter ``p``:
    The point to be tested

Template parameter ``Strict``:
    Set this parameter to ``True`` if the bounding box boundary should
    be excluded in the test

Remark:
    In the Python bindings, the 'Strict' argument is a normal function
    parameter with default value ``False``.)doc";

static const char *__doc_mitsuba_BoundingBox_contains_2 =
R"doc(Check whether a specified bounding box lies *on* or *within* the
current bounding box

Note that by definition, an 'invalid' bounding box (where min=$\infty$
and max=$-\infty$) does not cover any space. Hence, this method will
always return *true* when given such an argument.

Template parameter ``Strict``:
    Set this parameter to ``True`` if the bounding box boundary should
    be excluded in the test

Remark:
    In the Python bindings, the 'Strict' argument is a normal function
    parameter with default value ``False``.)doc";

static const char *__doc_mitsuba_BoundingBox_corner = R"doc(Return the position of a bounding box corner)doc";

static const char *__doc_mitsuba_BoundingBox_distance =
R"doc(Calculate the shortest distance between the axis-aligned bounding box
and the point ``p``.)doc";

static const char *__doc_mitsuba_BoundingBox_distance_2 =
R"doc(Calculate the shortest distance between the axis-aligned bounding box
and ``bbox``.)doc";

static const char *__doc_mitsuba_BoundingBox_expand = R"doc(Expand the bounding box to contain another point)doc";

static const char *__doc_mitsuba_BoundingBox_expand_2 = R"doc(Expand the bounding box to contain another bounding box)doc";

static const char *__doc_mitsuba_BoundingBox_extents =
R"doc(Calculate the bounding box extents

Returns:
    ``max - min``)doc";

static const char *__doc_mitsuba_BoundingBox_major_axis = R"doc(Return the dimension index with the index associated side length)doc";

static const char *__doc_mitsuba_BoundingBox_max = R"doc(< Component-wise maximum)doc";

static const char *__doc_mitsuba_BoundingBox_merge = R"doc(Merge two bounding boxes)doc";

static const char *__doc_mitsuba_BoundingBox_min = R"doc(< Component-wise minimum)doc";

static const char *__doc_mitsuba_BoundingBox_minor_axis = R"doc(Return the dimension index with the shortest associated side length)doc";

static const char *__doc_mitsuba_BoundingBox_operator_eq = R"doc(Test for equality against another bounding box)doc";

static const char *__doc_mitsuba_BoundingBox_operator_ne = R"doc(Test for inequality against another bounding box)doc";

static const char *__doc_mitsuba_BoundingBox_overlaps =
R"doc(Check two axis-aligned bounding boxes for possible overlap.

Parameter ``Strict``:
    Set this parameter to ``True`` if the bounding box boundary should
    be excluded in the test

Remark:
    In the Python bindings, the 'Strict' argument is a normal function
    parameter with default value ``False``.

Returns:
    ``True`` If overlap was detected.)doc";

static const char *__doc_mitsuba_BoundingBox_ray_intersect =
R"doc(Check if a ray intersects a bounding box

Note that this function ignores the ``(mint, maxt)`` interval
associated with the ray.)doc";

static const char *__doc_mitsuba_BoundingBox_reset =
R"doc(Mark the bounding box as invalid.

This operation sets the components of the minimum and maximum position
to $\infty$ and $-\infty$, respectively.)doc";

static const char *__doc_mitsuba_BoundingBox_squared_distance =
R"doc(Calculate the shortest squared distance between the axis-aligned
bounding box and the point ``p``.)doc";

static const char *__doc_mitsuba_BoundingBox_squared_distance_2 =
R"doc(Calculate the shortest squared distance between the axis-aligned
bounding box and ``bbox``.)doc";

static const char *__doc_mitsuba_BoundingBox_surface_area = R"doc(Calculate the 2-dimensional surface area of a 3D bounding box)doc";

static const char *__doc_mitsuba_BoundingBox_surface_area_2 = R"doc(General case: calculate the n-1 dimensional volume of the boundary)doc";

static const char *__doc_mitsuba_BoundingBox_valid =
R"doc(Check whether this is a valid bounding box

A bounding box ``bbox`` is considered to be valid when

```
bbox.min[i] <= bbox.max[i]
```

holds for each component ``i``.)doc";

static const char *__doc_mitsuba_BoundingBox_volume = R"doc(Calculate the n-dimensional volume of the bounding box)doc";

static const char *__doc_mitsuba_BoundingSphere = R"doc(Generic n-dimensional bounding sphere data structure)doc";

static const char *__doc_mitsuba_BoundingSphere_BoundingSphere = R"doc(Construct bounding sphere(s) at the origin having radius zero)doc";

static const char *__doc_mitsuba_BoundingSphere_BoundingSphere_2 =
R"doc(Create bounding sphere(s) from given center point(s) with given
size(s))doc";

static const char *__doc_mitsuba_BoundingSphere_center = R"doc()doc";

static const char *__doc_mitsuba_BoundingSphere_contains =
R"doc(Check whether a point lies *on* or *inside* the bounding sphere

Parameter ``p``:
    The point to be tested

Template parameter ``Strict``:
    Set this parameter to ``True`` if the bounding sphere boundary
    should be excluded in the test

Remark:
    In the Python bindings, the 'Strict' argument is a normal function
    parameter with default value ``False``.)doc";

static const char *__doc_mitsuba_BoundingSphere_empty = R"doc(Return whether this bounding sphere has a radius of zero or less.)doc";

static const char *__doc_mitsuba_BoundingSphere_expand = R"doc(Expand the bounding sphere radius to contain another point.)doc";

static const char *__doc_mitsuba_BoundingSphere_operator_eq = R"doc(Equality test against another bounding sphere)doc";

static const char *__doc_mitsuba_BoundingSphere_operator_ne = R"doc(Inequality test against another bounding sphere)doc";

static const char *__doc_mitsuba_BoundingSphere_radius = R"doc()doc";

static const char *__doc_mitsuba_BoundingSphere_ray_intersect = R"doc(Check if a ray intersects a bounding box)doc";

static const char *__doc_mitsuba_Class =
R"doc(Stores meta-information about Object instances.

This class provides a thin layer of RTTI (run-time type information),
which is useful for doing things like:

* Checking if an object derives from a certain class

* Determining the parent of a class at runtime

* Instantiating a class by name

* Unserializing a class from a binary data stream

See also:
    ref, Object)doc";

static const char *__doc_mitsuba_Class_Class =
R"doc(Construct a new class descriptor

This method should never be called manually. Instead, use the
MTS_IMPLEMENT_CLASS macro to automatically do this for you.

Parameter ``name``:
    Name of the class

Parameter ``parent``:
    Name of the parent class

Parameter ``abstract``:
    ``True`` if the class contains pure virtual methods

Parameter ``constr``:
    Pointer to a default construction function

Parameter ``unser``:
    Pointer to a unserialization construction function)doc";

static const char *__doc_mitsuba_Class_Class_2 =
R"doc(Construct a new class descriptor

This constructor additionally takes an alias name that is used to
refer to instances of this type in Mitsuba's scene specification
language.

This method should never be called manually. Instead, use the
MTS_IMPLEMENT_CLASS_ALIAS macro to automatically do this for you.

Parameter ``name``:
    Name of the class

Parameter ``alias``:
    Name used to refer to instances of this type in Mitsuba's scene
    description language (usually the same as ``name``)

Parameter ``parent``:
    Name of the parent class

Parameter ``abstract``:
    ``True`` if the class contains pure virtual methods

Parameter ``constr``:
    Pointer to a default construction function

Parameter ``unser``:
    Pointer to a unserialization construction function)doc";

static const char *__doc_mitsuba_Class_alias = R"doc(Return the scene description-specific alias)doc";

static const char *__doc_mitsuba_Class_construct =
R"doc(Generate an instance of this class

Parameter ``props``:
    A list of extra parameters that are supplied to the constructor

Remark:
    Throws an exception if the class is not constructible)doc";

static const char *__doc_mitsuba_Class_derives_from = R"doc(Check whether this class derives from *class_*)doc";

static const char *__doc_mitsuba_Class_for_name = R"doc(Look up a class by its name)doc";

static const char *__doc_mitsuba_Class_initialize_once = R"doc(Initialize a class - called by static_initialization())doc";

static const char *__doc_mitsuba_Class_is_abstract =
R"doc(Return whether or not the class represented by this Class object
contains pure virtual methods)doc";

static const char *__doc_mitsuba_Class_is_constructible = R"doc(Does the class support instantiation over RTTI?)doc";

static const char *__doc_mitsuba_Class_is_serializable = R"doc(Does the class support serialization?)doc";

static const char *__doc_mitsuba_Class_m_abstract = R"doc()doc";

static const char *__doc_mitsuba_Class_m_alias = R"doc()doc";

static const char *__doc_mitsuba_Class_m_constr = R"doc()doc";

static const char *__doc_mitsuba_Class_m_name = R"doc()doc";

static const char *__doc_mitsuba_Class_m_parent = R"doc()doc";

static const char *__doc_mitsuba_Class_m_parent_name = R"doc()doc";

static const char *__doc_mitsuba_Class_m_unser = R"doc()doc";

static const char *__doc_mitsuba_Class_name = R"doc(Return the name of the represented class)doc";

static const char *__doc_mitsuba_Class_parent =
R"doc(Return the Class object associated with the parent class of nullptr if
it does not have one.)doc";

static const char *__doc_mitsuba_Class_rtti_is_initialized = R"doc(Check if the RTTI layer has been initialized)doc";

static const char *__doc_mitsuba_Class_static_initialization =
R"doc(Initializes the built-in RTTI and creates a list of all compiled
classes)doc";

static const char *__doc_mitsuba_Class_static_shutdown = R"doc(Free the memory taken by static_initialization())doc";

static const char *__doc_mitsuba_Class_unserialize =
R"doc(Unserialize an instance of the class

Remark:
    Throws an exception if the class is not unserializable)doc";

static const char *__doc_mitsuba_Color = R"doc(//! @{ \name Data types for RGB data)doc";

static const char *__doc_mitsuba_Color_Color = R"doc()doc";

static const char *__doc_mitsuba_Color_Color_2 = R"doc()doc";

static const char *__doc_mitsuba_Color_b = R"doc()doc";

static const char *__doc_mitsuba_Color_b_2 = R"doc()doc";

static const char *__doc_mitsuba_Color_g = R"doc()doc";

static const char *__doc_mitsuba_Color_g_2 = R"doc()doc";

static const char *__doc_mitsuba_Color_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Color_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Color_r = R"doc()doc";

static const char *__doc_mitsuba_Color_r_2 = R"doc()doc";

static const char *__doc_mitsuba_ContinuousSpectrum = R"doc()doc";

static const char *__doc_mitsuba_ContinuousSpectrum_2 =
R"doc(Abstract continuous spectral power distribution data type, which
supports evaluation at arbitrary wavelengths.

Remark:
    The term 'continuous' does not imply that the underlying spectrum
    must be continuous, but rather emphasizes that it is a function
    defined on the set of real numbers (as opposed to the discretely
    sampled spectrum, which only stores samples at a finite set of
    wavelengths).

A continuous spectrum can also be vary with respect to a spatial
position. The (optional) texture interface at the bottom can be
implemented to support this. The default implementation strips the
position information and falls back the non-textured implementation.)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_D65 = R"doc(Convenience method returning the standard D65 illuminant.)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_class = R"doc()doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval =
R"doc(Evaluate the value of the spectral power distribution at a set of
wavelengths

Parameter ``wavelengths``:
    List of wavelengths specified in nanometers)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval_2 = R"doc(Vectorized version of eval())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval_3 = R"doc(Wrapper for scalar eval() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval_4 = R"doc(Evaluate the texture at the given surface interaction)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval_5 = R"doc(Vectorized version of eval())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_eval_6 = R"doc(Wrapper for scalar eval() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_mean =
R"doc(Return the mean value of the spectrum over the support
(MTS_WAVELENGTH_MIN..MTS_WAVELENGTH_MAX)

Not every implementation necessarily provides this function. The
default implementation throws an exception.

Even if the operation is provided, it may only return an
approximation.)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf =
R"doc(Return the probability distribution of the sample() method as a
probability per unit wavelength (in units of 1/nm).

Not every implementation necessarily provides this function. The
default implementation throws an exception.)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf_2 = R"doc(Vectorized version of pdf())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf_3 = R"doc(Wrapper for scalar pdf() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf_4 =
R"doc(Return the probability distribution of the sample() method as a
probability per unit wavelength (in units of 1/nm).

Not every implementation necessarily provides this function. The
default implementation throws an exception.)doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf_5 = R"doc(Vectorized version of pdf())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_pdf_6 = R"doc(Wrapper for scalar pdf() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample =
R"doc(Importance sample the spectral power distribution

Not every implementation necessarily provides this function. The
default implementation throws an exception.

Parameter ``sample``:
    A uniform variate for each desired wavelength.

Returns:
    1. Set of sampled wavelengths specified in nanometers

2. The Monte Carlo importance weight (Spectral power distribution
value divided by the sampling density))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample_2 = R"doc(Vectorized version of sample())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample_3 = R"doc(Wrapper for scalar sample() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample_4 =
R"doc(Importance sample the (textured) spectral power distribution

Not every implementation necessarily provides this function. The
default implementation throws an exception.

Parameter ``si``:
    An interaction record describing the associated surface position

Parameter ``sample``:
    A uniform variate for each desired wavelength.

Returns:
    1. Set of sampled wavelengths specified in nanometers

2. The Monte Carlo importance weight (Spectral power distribution
value divided by the sampling density))doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample_5 = R"doc(Vectorized version of sample())doc";

static const char *__doc_mitsuba_ContinuousSpectrum_sample_6 = R"doc(Wrapper for scalar sample() with a mask (which will be ignored))doc";

static const char *__doc_mitsuba_DefaultFormatter =
R"doc(The default formatter used to turn log messages into a human-readable
form)doc";

static const char *__doc_mitsuba_DefaultFormatter_DefaultFormatter = R"doc(Create a new default formatter)doc";

static const char *__doc_mitsuba_DefaultFormatter_class = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_format = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_has_class =
R"doc(See also:
    set_has_class)doc";

static const char *__doc_mitsuba_DefaultFormatter_has_date =
R"doc(See also:
    set_has_date)doc";

static const char *__doc_mitsuba_DefaultFormatter_has_log_level =
R"doc(See also:
    set_has_log_level)doc";

static const char *__doc_mitsuba_DefaultFormatter_has_thread =
R"doc(See also:
    set_has_thread)doc";

static const char *__doc_mitsuba_DefaultFormatter_m_has_class = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_m_has_date = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_m_has_log_level = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_m_has_thread = R"doc()doc";

static const char *__doc_mitsuba_DefaultFormatter_set_has_class = R"doc(Should class information be included? The default is yes.)doc";

static const char *__doc_mitsuba_DefaultFormatter_set_has_date = R"doc(Should date information be included? The default is yes.)doc";

static const char *__doc_mitsuba_DefaultFormatter_set_has_log_level = R"doc(Should log level information be included? The default is yes.)doc";

static const char *__doc_mitsuba_DefaultFormatter_set_has_thread = R"doc(Should thread information be included? The default is yes.)doc";

static const char *__doc_mitsuba_DirectionSample =
R"doc(Record for solid-angle based area sampling techniques

This data structure is used in techniques that sample positions
relative to a fixed reference position in the scene. For instance,
*direct illumination strategies* importance sample the incident
radiance received by a given surface location. Mitsuba uses this
approach in a wider bidirectional sense: sampling the incident
importance due to a sensor also uses the same data structures and
strategies, which are referred to as *direct sampling*.

This record inherits all fields from PositionSample and extends it
with two useful quantities that are cached so that they don't need to
be recomputed: the unit direction and distance from the reference
position to the sampled point.)doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample =
R"doc(Create a direct sampling record, which can be used to *query* the
density of a surface position with respect to a given reference
position.

Direction `s` is set so that it points from the reference surface to
the intersected surface, as required when using e.g. the Endpoint
interface to compute PDF values.

Parameter ``it``:
    Surface interaction

Parameter ``ref``:
    Reference position)doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_2 = R"doc(Element-by-element constructor)doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_3 = R"doc(Construct from a position sample)doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_4 = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_5 = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_6 = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_DirectionSample_7 = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_d = R"doc(Unit direction from the reference point to the target shape)doc";

static const char *__doc_mitsuba_DirectionSample_dist = R"doc(Distance from the reference point to the target shape)doc";

static const char *__doc_mitsuba_DirectionSample_operator_array = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_DirectionSample_set_query =
R"doc(Setup this record so that it can be used to *query* the density of a
surface position (where the reference point lies on a *surface*).

Parameter ``ray``:
    Reference to the ray that generated the intersection ``si``. The
    ray origin must be located at the reference surface and point
    towards ``si``.p.

Parameter ``si``:
    A surface intersection record (usually on an emitter).)doc";

static const char *__doc_mitsuba_DiscreteDistribution =
R"doc(Discrete probability distribution

This data structure can be used to transform uniformly distributed
samples to a stored discrete probability distribution.)doc";

static const char *__doc_mitsuba_DiscreteDistribution_DiscreteDistribution = R"doc(Reserve memory for a distribution with the given number of entries)doc";

static const char *__doc_mitsuba_DiscreteDistribution_DiscreteDistribution_2 = R"doc(Initialize the distribution with the given data)doc";

static const char *__doc_mitsuba_DiscreteDistribution_append =
R"doc(Append an entry with the specified discrete probability.

Remark:
    ``pdf_value`` must be non-negative.)doc";

static const char *__doc_mitsuba_DiscreteDistribution_cdf =
R"doc(Return the cdf entries.

Note that if n values have been appended, there will be (n+1) entries
in this CDF (the first one being 0).)doc";

static const char *__doc_mitsuba_DiscreteDistribution_clear = R"doc(Clear all entries)doc";

static const char *__doc_mitsuba_DiscreteDistribution_eval = R"doc(Access an entry by its index)doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_cdf = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_normalization = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_normalized = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_range_end = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_range_start = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_m_sum = R"doc()doc";

static const char *__doc_mitsuba_DiscreteDistribution_normalization =
R"doc(Return the normalization factor (i.e. the inverse of get_sum())

This assumes that normalize() has previously been called)doc";

static const char *__doc_mitsuba_DiscreteDistribution_normalize =
R"doc(Normalize the distribution

Throws an exception when the distribution contains no elements. The
distribution is not considered to be normalized if the sum of
probabilities equals zero.

Returns:
    Sum of the (previously unnormalized) entries)doc";

static const char *__doc_mitsuba_DiscreteDistribution_normalized = R"doc(Have the probability densities been normalized?)doc";

static const char *__doc_mitsuba_DiscreteDistribution_reserve = R"doc(Reserve memory for a certain number of entries)doc";

static const char *__doc_mitsuba_DiscreteDistribution_sample =
R"doc(%Transform a uniformly distributed sample to the stored distribution

Parameter ``sample_value``:
    A uniformly distributed sample on [0,1]

Returns:
    The discrete index associated with the sample)doc";

static const char *__doc_mitsuba_DiscreteDistribution_sample_pdf =
R"doc(%Transform a uniformly distributed sample to the stored distribution

Parameter ``sample_value``:
    A uniformly distributed sample on [0,1]

Returns:
    A pair with (the discrete index associated with the sample,
    probability value of the sample).)doc";

static const char *__doc_mitsuba_DiscreteDistribution_sample_reuse =
R"doc(%Transform a uniformly distributed sample to the stored distribution

The original sample is value adjusted so that it can be reused as a
uniform variate.

Parameter ``sample_value``:
    A uniformly distributed sample on [0,1]

Returns:
    The discrete index associated with the sample and the re-scaled
    sample value)doc";

static const char *__doc_mitsuba_DiscreteDistribution_sample_reuse_pdf =
R"doc(%Transform a uniformly distributed sample to the stored distribution.

The original sample is value adjusted so that it can be reused as a
uniform variate.

Parameter ``sample_value``:
    A uniformly distributed sample on [0,1]

Returns:
    A tuple containing

1. the discrete index associated with the sample 2. the probability
value of the sample 3. the re-scaled sample value)doc";

static const char *__doc_mitsuba_DiscreteDistribution_size = R"doc(Return the number of entries so far)doc";

static const char *__doc_mitsuba_DiscreteDistribution_sum =
R"doc(Return the original (unnormalized) sum of all PDF entries

This assumes that normalize() has previously been called.)doc";

static const char *__doc_mitsuba_DummyStream =
R"doc(Stream implementation that never writes to disk, but keeps track of
the size of the content being written. It can be used, for example, to
measure the precise amount of memory needed to store serialized
content.)doc";

static const char *__doc_mitsuba_DummyStream_DummyStream = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_can_read = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_can_write = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_class = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_close =
R"doc(Closes the stream. No further read or write operations are permitted.

This function is idempotent. It may be called automatically by the
destructor.)doc";

static const char *__doc_mitsuba_DummyStream_flush = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_is_closed = R"doc(Whether the stream is closed (no read or write are then permitted).)doc";

static const char *__doc_mitsuba_DummyStream_m_is_closed = R"doc(Whether the stream has been closed.)doc";

static const char *__doc_mitsuba_DummyStream_m_pos =
R"doc(Current position in the "virtual" stream (even though nothing is ever
written, we need to maintain consistent positioning).)doc";

static const char *__doc_mitsuba_DummyStream_m_size = R"doc(Size of all data written to the stream)doc";

static const char *__doc_mitsuba_DummyStream_read = R"doc(//! @{ \name Implementation of the Stream interface)doc";

static const char *__doc_mitsuba_DummyStream_seek = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_size = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_tell = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_truncate = R"doc()doc";

static const char *__doc_mitsuba_DummyStream_write = R"doc()doc";

static const char *__doc_mitsuba_ELogLevel = R"doc(Available Log message types)doc";

static const char *__doc_mitsuba_ELogLevel_EDebug = R"doc(< Debug message, usually turned off)doc";

static const char *__doc_mitsuba_ELogLevel_EError = R"doc(< Error message, causes an exception to be thrown)doc";

static const char *__doc_mitsuba_ELogLevel_EInfo = R"doc(< More relevant debug / information message)doc";

static const char *__doc_mitsuba_ELogLevel_ETrace = R"doc(< Trace message, for extremely verbose debugging)doc";

static const char *__doc_mitsuba_ELogLevel_EWarn = R"doc(< Warning message)doc";

static const char *__doc_mitsuba_EMeasure =
R"doc(A list of measures that are associated with various sampling methods
in Mitsuba.

Every now and then, sampling densities consist of a sum of several
terms defined on spaces that have different associated measures. In
this case, one of the constants in EMeasure can be specified to
clarify the component in question when performing query operations.)doc";

static const char *__doc_mitsuba_EMeasure_EArea = R"doc(Area measure)doc";

static const char *__doc_mitsuba_EMeasure_EDiscrete = R"doc(Discrete measure)doc";

static const char *__doc_mitsuba_EMeasure_EInvalidMeasure = R"doc(Invalid measure)doc";

static const char *__doc_mitsuba_EMeasure_ELength = R"doc(Length measure)doc";

static const char *__doc_mitsuba_EMeasure_EMeasureCount = R"doc(Specifies the number of supported measures)doc";

static const char *__doc_mitsuba_EMeasure_ESolidAngle = R"doc(Solid angle measure)doc";

static const char *__doc_mitsuba_EOFException = R"doc()doc";

static const char *__doc_mitsuba_EOFException_EOFException = R"doc()doc";

static const char *__doc_mitsuba_EOFException_gcount = R"doc()doc";

static const char *__doc_mitsuba_EOFException_m_gcount = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase =
R"doc(List of 'phases' that are handled by the profiler. Note that a partial
order is assumed -- if a method "B" can occur in a call graph of
another method "A", then "B" must occur after "A" in the list below.)doc";

static const char *__doc_mitsuba_EProfilerPhase_EBSDFEvaluate = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EBSDFEvaluateP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EBSDFSample = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EBSDFSampleP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ECreateSurfaceInteraction = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ECreateSurfaceInteractionP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EEndpointEvaluate = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EEndpointEvaluateP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EEndpointSample = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EEndpointSampleP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EImageBlockPut = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EImageBlockPutP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EInitKDTree = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EInitScene = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ELoadGeometry = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ELoadTexture = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_EProfilerPhaseCount = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ERayIntersect = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ERayIntersectP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ERayTest = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ERayTestP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ERender = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESampleEmitterDirection = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESampleEmitterDirectionP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESampleEmitterRay = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESampleEmitterRayP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESamplingIntegratorEval = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESamplingIntegratorEvalP = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESpectrumEval = R"doc()doc";

static const char *__doc_mitsuba_EProfilerPhase_ESpectrumEvalP = R"doc()doc";

static const char *__doc_mitsuba_ETransportMode =
R"doc(Specifies the transport mode when sampling or evaluating a scattering
function)doc";

static const char *__doc_mitsuba_ETransportMode_EImportance = R"doc(Importance transport)doc";

static const char *__doc_mitsuba_ETransportMode_ERadiance = R"doc(Radiance transport)doc";

static const char *__doc_mitsuba_ETransportMode_ETransportModes = R"doc(Specifies the number of supported transport modes)doc";

static const char *__doc_mitsuba_EType = R"doc(Supported normal distribution functions)doc";

static const char *__doc_mitsuba_EType_EBeckmann = R"doc(Beckmann distribution derived from Gaussian random surfaces)doc";

static const char *__doc_mitsuba_EType_EGGX =
R"doc(GGX: Long-tailed distribution for very rough surfaces (aka.
Trowbridge-Reitz distr.))doc";

static const char *__doc_mitsuba_Emitter = R"doc()doc";

static const char *__doc_mitsuba_Emitter_Emitter = R"doc()doc";

static const char *__doc_mitsuba_Emitter_class = R"doc()doc";

static const char *__doc_mitsuba_Emitter_is_environment = R"doc(Is this an environment map light emitter?)doc";

static const char *__doc_mitsuba_Endpoint =
R"doc(Endpoint: an abstract interface to light sources and sensors

This class implements an abstract interface to all sensors and light
sources emitting radiance and importance, respectively. Subclasses
implement functions to evaluate and sample the profile, and to compute
probability densities associated with the provided sampling
techniques.

The name *endpoint* refers to the property that while a light path may
involve any number of scattering events, it always starts and ends
with emission and a measurement, respectively.

In addition to Endpoint::sample_ray, which generates a sample from the
profile, subclasses also provide a specialized direction sampling
method. This is a generalization of direct illumination techniques to
both emitters *and* sensors. A direction sampling method is given an
arbitrary reference position in the scene and samples a direction from
the reference point towards the endpoint (ideally proportional to the
emission/sensitivity profile). This reduces the sampling domain from
4D to 2D, which often enables the construction of smarter specialized
sampling techniques.

When rendering scenes involving participating media, it is important
to know what medium surrounds the sensors and light sources. For this
reason, every endpoint instance keeps a reference to a medium (which
may be set to ``nullptr`` when it is surrounded by vacuum).)doc";

static const char *__doc_mitsuba_Endpoint_Endpoint = R"doc(//! @})doc";

static const char *__doc_mitsuba_Endpoint_bbox = R"doc(Return an axis-aligned box bounding the spatial extents of the emitter)doc";

static const char *__doc_mitsuba_Endpoint_class = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_create_shape =
R"doc(Create a special shape that represents the emitter

Some types of emitters are inherently associated with a surface, yet
this surface is not explicitly needed for many kinds of rendering
algorithms.

An example would be an environment map, where the associated shape is
a sphere surrounding the scene. Another example would be a perspective
camera with depth of field, where the associated shape is a disk
representing the aperture (remember that this class represents
emitters in a generalized bidirectional sense, which includes
sensors).

When this shape is in fact needed by the underlying rendering
algorithm, this function can be called to create it. The default
implementation simply returns ``nullptr``.

Parameter ``scene``:
    A pointer to the associated scene (the created shape is allowed to
    depend on it))doc";

static const char *__doc_mitsuba_Endpoint_eval =
R"doc(Given a ray-surface intersection, return the emitted radiance or
importance traveling along the reverse direction

This function is e.g. used when an area light source has been hit by a
ray in a path tracing-style integrator, and it subsequently needs to
be queried for the emitted radiance along the negative ray direction.
The default implementation throws an exception, which states that the
method is not implemented.

Parameter ``si``:
    An intersect record that specfies both the query position and
    direction (using the ``si.wi`` field)

Returns:
    The emitted radiance or importance)doc";

static const char *__doc_mitsuba_Endpoint_eval_2 = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_eval_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval())doc";

static const char *__doc_mitsuba_Endpoint_eval_pol =
R"doc(Polarized version of eval()

Returns:
    Mueller matrix of the emitted radiance or importance (in standard
    world space for the sensor profile).)doc";

static const char *__doc_mitsuba_Endpoint_eval_pol_2 = R"doc(Vectorized version of eval_pol())doc";

static const char *__doc_mitsuba_Endpoint_eval_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval_pol())doc";

static const char *__doc_mitsuba_Endpoint_m_medium = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_m_monochrome = R"doc(Whether monochrome mode is enabled.)doc";

static const char *__doc_mitsuba_Endpoint_m_needs_sample_2 = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_m_needs_sample_3 = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_m_shape = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_m_world_transform = R"doc()doc";

static const char *__doc_mitsuba_Endpoint_medium = R"doc(Return a pointer to the medium that surrounds the emitter)doc";

static const char *__doc_mitsuba_Endpoint_medium_2 =
R"doc(Return a pointer to the medium that surrounds the emitter (const
version))doc";

static const char *__doc_mitsuba_Endpoint_needs_sample_2 =
R"doc(Does the method sample_ray() require a uniformly distributed 2D sample
for the ``sample2`` parameter?)doc";

static const char *__doc_mitsuba_Endpoint_needs_sample_3 =
R"doc(Does the method sample_ray() require a uniformly distributed 2D sample
for the ``sample3`` parameter?)doc";

static const char *__doc_mitsuba_Endpoint_pdf_direction =
R"doc(Evaluate the probability density of the *direct* sampling method
implemented by the sample_direction() method.

Parameter ``ds``:
    A direct sampling record, which specifies the query location.)doc";

static const char *__doc_mitsuba_Endpoint_pdf_direction_2 = R"doc(Vectorized version of pdf_direction())doc";

static const char *__doc_mitsuba_Endpoint_pdf_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
pdf_direction())doc";

static const char *__doc_mitsuba_Endpoint_sample_direction =
R"doc(Given a reference point in the scene, sample a direction from the
reference point towards the endpoint (ideally proportional to the
emission/sensitivity profile)

This operation is a generalization of direct illumination techniques
to both emitters *and* sensors. A direction sampling method is given
an arbitrary reference position in the scene and samples a direction
from the reference point towards the endpoint (ideally proportional to
the emission/sensitivity profile). This reduces the sampling domain
from 4D to 2D, which often enables the construction of smarter
specialized sampling techniques.

Ideally, the implementation should importance sample the product of
the emission profile and the geometry term between the reference point
and the position on the endpoint.

The default implementation throws an exception.

Parameter ``ref``:
    A reference position somewhere within the scene.

Parameter ``sample``:
    A uniformly distributed 2D point on the domain ``[0,1]^2``

Returns:
    A DirectionSample instance describing the generated sample along
    with a spectral importance weight.)doc";

static const char *__doc_mitsuba_Endpoint_sample_direction_2 = R"doc(Vectorized version of sample_direction())doc";

static const char *__doc_mitsuba_Endpoint_sample_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_direction())doc";

static const char *__doc_mitsuba_Endpoint_sample_direction_pol =
R"doc(Polarized version of sample_direction()

Since there is no special polarized importance sampling this method
behaves very similar to the standard one.

Returns:
    A DirectionSample instance describing the generated sample along
    with a Mueller matrix of importance weights (in standard world
    space for the sensor profile).)doc";

static const char *__doc_mitsuba_Endpoint_sample_direction_pol_2 = R"doc(Vectorized version of sample_direction_pol())doc";

static const char *__doc_mitsuba_Endpoint_sample_direction_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_direction_pol())doc";

static const char *__doc_mitsuba_Endpoint_sample_ray =
R"doc(Importance sample a ray proportional to the endpoint's
sensitivity/emission profile.

The endpoint profile is a six-dimensional quantity that depends on
time, wavelength, surface position, and direction. This function takes
a given time value and five uniformly distributed samples on the
interval [0, 1] and warps them so that the returned ray follows the
profile. Any discrepancies between ideal and actual sampled profile
are absorbed into a spectral importance weight that is returned along
with the ray.

Parameter ``time``:
    The scene time associated with the ray to be sampled

Parameter ``sample1``:
    A uniformly distributed 1D value that is used to sample the
    spectral dimension of the emission profile.

Parameter ``sample2``:
    A uniformly distributed sample on the domain ``[0,1]^2``. For
    sensor endpoints, this argument corresponds to the sample position
    in fractional pixel coordinates relative to the crop window of the
    underlying film. This argument is ignored if ``needs_sample_2() ==
    false``.

Parameter ``sample3``:
    A uniformly distributed sample on the domain ``[0,1]^2``. For
    sensor endpoints, this argument determines the position on the
    aperture of the sensor. This argument is ignored if
    ``needs_sample_3() == false``.

Returns:
    The sampled ray and (potentially spectrally varying) importance
    weights. The latter account for the difference between the profile
    and the actual used sampling density function.)doc";

static const char *__doc_mitsuba_Endpoint_sample_ray_2 = R"doc(Vectorized version of sample_ray())doc";

static const char *__doc_mitsuba_Endpoint_sample_ray_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_ray())doc";

static const char *__doc_mitsuba_Endpoint_sample_ray_pol =
R"doc(Polarized version of sample_ray()

Since there is no special polarized importance sampling this method
behaves very similar to the standard one.

Returns:
    The sampled ray and the Mueller matrix of importance weights (in
    standard world space for the sensor profile).)doc";

static const char *__doc_mitsuba_Endpoint_sample_ray_pol_2 = R"doc(Vectorized version of sample_ray_pol)doc";

static const char *__doc_mitsuba_Endpoint_sample_ray_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_ray_pol())doc";

static const char *__doc_mitsuba_Endpoint_set_medium = R"doc(Set the medium that surrounds the emitter.)doc";

static const char *__doc_mitsuba_Endpoint_set_shape = R"doc(Set the shape associated with this endpoint.)doc";

static const char *__doc_mitsuba_Endpoint_shape = R"doc(Return the shape, to which the emitter is currently attached)doc";

static const char *__doc_mitsuba_Endpoint_shape_2 =
R"doc(Return the shape, to which the emitter is currently attached (const
version))doc";

static const char *__doc_mitsuba_Endpoint_world_transform = R"doc(Return the local space to world space transformation)doc";

static const char *__doc_mitsuba_FileResolver =
R"doc(Simple class for resolving paths on Linux/Windows/Mac OS

This convenience class looks for a file or directory given its name
and a set of search paths. The implementation walks through the search
paths in order and stops once the file is found.)doc";

static const char *__doc_mitsuba_FileResolver_FileResolver = R"doc(Initialize a new file resolver with the current working directory)doc";

static const char *__doc_mitsuba_FileResolver_append = R"doc(Append an entry to the end of the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_begin = R"doc(Return an iterator at the beginning of the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_begin_2 =
R"doc(Return an iterator at the beginning of the list of search paths
(const))doc";

static const char *__doc_mitsuba_FileResolver_class = R"doc()doc";

static const char *__doc_mitsuba_FileResolver_clear = R"doc(Clear the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_contains = R"doc(Check if a given path is included in the search path list)doc";

static const char *__doc_mitsuba_FileResolver_end = R"doc(Return an iterator at the end of the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_end_2 = R"doc(Return an iterator at the end of the list of search paths (const))doc";

static const char *__doc_mitsuba_FileResolver_erase = R"doc(Erase the entry at the given iterator position)doc";

static const char *__doc_mitsuba_FileResolver_erase_2 = R"doc(Erase the search path from the list)doc";

static const char *__doc_mitsuba_FileResolver_m_paths = R"doc()doc";

static const char *__doc_mitsuba_FileResolver_operator_array = R"doc(Return an entry from the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_operator_array_2 = R"doc(Return an entry from the list of search paths (const))doc";

static const char *__doc_mitsuba_FileResolver_prepend = R"doc(Prepend an entry at the beginning of the list of search paths)doc";

static const char *__doc_mitsuba_FileResolver_resolve =
R"doc(Walk through the list of search paths and try to resolve the input
path)doc";

static const char *__doc_mitsuba_FileResolver_size = R"doc(Return the number of search paths)doc";

static const char *__doc_mitsuba_FileResolver_to_string = R"doc(Return a human-readable representation of this instance)doc";

static const char *__doc_mitsuba_FileStream =
R"doc(Simple Stream implementation backed-up by a file.

The underlying file abstraction is std::fstream, and so most
operations can be expected to behave similarly.)doc";

static const char *__doc_mitsuba_FileStream_EMode = R"doc()doc";

static const char *__doc_mitsuba_FileStream_EMode_ERead = R"doc(Opens a file in (binary) read-only mode)doc";

static const char *__doc_mitsuba_FileStream_EMode_EReadWrite = R"doc(Opens (but never creates) a file in (binary) read-write mode)doc";

static const char *__doc_mitsuba_FileStream_EMode_ETruncReadWrite = R"doc(Opens (and truncates) a file in (binary) read-write mode)doc";

static const char *__doc_mitsuba_FileStream_FileStream =
R"doc(Constructs a new FileStream by opening the file pointed by ``p``.

The file is opened in read-only or read/write mode as specified by
``mode``.

Throws if trying to open a non-existing file in with write disabled.
Throws an exception if the file cannot be opened / created.)doc";

static const char *__doc_mitsuba_FileStream_can_read = R"doc(True except if the stream was closed.)doc";

static const char *__doc_mitsuba_FileStream_can_write = R"doc(Whether the field was open in write-mode (and was not closed))doc";

static const char *__doc_mitsuba_FileStream_class = R"doc()doc";

static const char *__doc_mitsuba_FileStream_close =
R"doc(Closes the stream and the underlying file. No further read or write
operations are permitted.

This function is idempotent. It is called automatically by the
destructor.)doc";

static const char *__doc_mitsuba_FileStream_flush = R"doc(Flushes any buffered operation to the underlying file.)doc";

static const char *__doc_mitsuba_FileStream_is_closed = R"doc(Whether the stream is closed (no read or write are then permitted).)doc";

static const char *__doc_mitsuba_FileStream_m_file = R"doc()doc";

static const char *__doc_mitsuba_FileStream_m_mode = R"doc()doc";

static const char *__doc_mitsuba_FileStream_m_path = R"doc()doc";

static const char *__doc_mitsuba_FileStream_native = R"doc(Return the "native" std::fstream associated with this FileStream)doc";

static const char *__doc_mitsuba_FileStream_path = R"doc(Return the path descriptor associated with this FileStream)doc";

static const char *__doc_mitsuba_FileStream_read =
R"doc(Reads a specified amount of data from the stream. Throws an exception
when the stream ended prematurely.)doc";

static const char *__doc_mitsuba_FileStream_read_line = R"doc(Convenience function for reading a line of text from an ASCII file)doc";

static const char *__doc_mitsuba_FileStream_seek =
R"doc(Seeks to a position inside the stream. May throw if the resulting
state is invalid.)doc";

static const char *__doc_mitsuba_FileStream_size =
R"doc(Returns the size of the file. \note After a write, the size may not be
updated until a flush is performed.)doc";

static const char *__doc_mitsuba_FileStream_tell = R"doc(Gets the current position inside the file)doc";

static const char *__doc_mitsuba_FileStream_to_string = R"doc(Returns a string representation)doc";

static const char *__doc_mitsuba_FileStream_truncate =
R"doc(Truncates the file to a given size. Automatically flushes the stream
before truncating the file. The position is updated to
``min(old_position, size)``.

Throws an exception if in read-only mode.)doc";

static const char *__doc_mitsuba_FileStream_write =
R"doc(Writes a specified amount of data into the stream. Throws an exception
when not all data could be written.)doc";

static const char *__doc_mitsuba_Film =
R"doc(Abstract film base class - used to store samples generated by
Integrator implementations.

To avoid lock-related bottlenecks when rendering with many cores,
rendering threads first store results in an "image block", which is
then committed to the film using the put() method.)doc";

static const char *__doc_mitsuba_Film_Film = R"doc(Create a film)doc";

static const char *__doc_mitsuba_Film_add_bitmap =
R"doc(Accumulate a bitmap on top of the radiance values stored in the film.
The size of the given bitmap has to match to current size.)doc";

static const char *__doc_mitsuba_Film_bitmap =
R"doc(Returns a pointer to the underlying image storage, or nullptr if there
is none.)doc";

static const char *__doc_mitsuba_Film_class = R"doc()doc";

static const char *__doc_mitsuba_Film_clear = R"doc(Clear the film)doc";

static const char *__doc_mitsuba_Film_crop_offset = R"doc(Return the offset of the crop window)doc";

static const char *__doc_mitsuba_Film_crop_size = R"doc(Return the size of the crop window)doc";

static const char *__doc_mitsuba_Film_destination_exists = R"doc(Does the destination file already exist?)doc";

static const char *__doc_mitsuba_Film_develop =
R"doc(Develop the film and write the result to the previously specified
filename)doc";

static const char *__doc_mitsuba_Film_develop_2 =
R"doc(Develop the contents of a subregion of the film and store it inside
the given bitmap

This may fail when the film does not have an explicit representation
of the bitmap in question (e.g. when it is writing to a tiled EXR
image)

Returns:
    ``True`` upon success)doc";

static const char *__doc_mitsuba_Film_has_high_quality_edges =
R"doc(Should regions slightly outside the image plane be sampled to improve
the quality of the reconstruction at the edges? This only makes sense
when reconstruction filters other than the box filter are used.)doc";

static const char *__doc_mitsuba_Film_m_crop_offset = R"doc()doc";

static const char *__doc_mitsuba_Film_m_crop_size = R"doc()doc";

static const char *__doc_mitsuba_Film_m_filter = R"doc()doc";

static const char *__doc_mitsuba_Film_m_high_quality_edges = R"doc()doc";

static const char *__doc_mitsuba_Film_m_monochrome = R"doc(Whether monochrome mode is enabled.)doc";

static const char *__doc_mitsuba_Film_m_size = R"doc()doc";

static const char *__doc_mitsuba_Film_put = R"doc(Merge an image block into the film)doc";

static const char *__doc_mitsuba_Film_reconstruction_filter = R"doc(Return the image reconstruction filter (const version))doc";

static const char *__doc_mitsuba_Film_set_bitmap =
R"doc(Overwrite the film with the given bitmap. The size of the given bitmap
has to match to current size.)doc";

static const char *__doc_mitsuba_Film_set_destination_file = R"doc(Set the target filename (with or without extension))doc";

static const char *__doc_mitsuba_Film_size =
R"doc(Ignoring the crop window, return the resolution of the underlying
sensor)doc";

static const char *__doc_mitsuba_Film_to_string = R"doc(//! @})doc";

static const char *__doc_mitsuba_Formatter =
R"doc(Abstract interface for converting log information into a human-
readable format)doc";

static const char *__doc_mitsuba_Formatter_class = R"doc()doc";

static const char *__doc_mitsuba_Formatter_format =
R"doc(Turn a log message into a human-readable format

Parameter ``level``:
    The importance of the debug message

Parameter ``class_``:
    Originating class or ``nullptr``

Parameter ``thread``:
    Thread, which is reponsible for creating the message

Parameter ``file``:
    File, which is responsible for creating the message

Parameter ``line``:
    Associated line within the source file

Parameter ``msg``:
    Text content associated with the log message)doc";

static const char *__doc_mitsuba_Frame =
R"doc(Stores a three-dimensional orthonormal coordinate frame

This class is used to convert between different cartesian coordinate
systems and to efficiently evaluate trigonometric functions in a
spherical coordinate system whose pole is aligned with the ``n`` axis
(e.g. cos_theta(), sin_phi(), etc.).)doc";

static const char *__doc_mitsuba_Frame_Frame = R"doc(Construct a new coordinate frame from a single vector)doc";

static const char *__doc_mitsuba_Frame_Frame_2 = R"doc()doc";

static const char *__doc_mitsuba_Frame_Frame_3 = R"doc()doc";

static const char *__doc_mitsuba_Frame_Frame_4 = R"doc()doc";

static const char *__doc_mitsuba_Frame_Frame_5 = R"doc()doc";

static const char *__doc_mitsuba_Frame_cos_phi =
R"doc(Give a unit direction, this function returns the cosine of the azimuth
in a reference spherical coordinate system (see the Frame description))doc";

static const char *__doc_mitsuba_Frame_cos_phi_2 =
R"doc(Give a unit direction, this function returns the squared cosine of the
azimuth in a reference spherical coordinate system (see the Frame
description))doc";

static const char *__doc_mitsuba_Frame_cos_theta =
R"doc(Give a unit direction, this function returns the cosine of the
elevation angle in a reference spherical coordinate system (see the
Frame description))doc";

static const char *__doc_mitsuba_Frame_cos_theta_2 =
R"doc(Give a unit direction, this function returns the square cosine of the
elevation angle in a reference spherical coordinate system (see the
Frame description))doc";

static const char *__doc_mitsuba_Frame_n = R"doc()doc";

static const char *__doc_mitsuba_Frame_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Frame_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Frame_operator_eq = R"doc(Equality test)doc";

static const char *__doc_mitsuba_Frame_operator_ne = R"doc(Inequality test)doc";

static const char *__doc_mitsuba_Frame_s = R"doc()doc";

static const char *__doc_mitsuba_Frame_sin_phi =
R"doc(Give a unit direction, this function returns the sine of the azimuth
in a reference spherical coordinate system (see the Frame description))doc";

static const char *__doc_mitsuba_Frame_sin_phi_2 =
R"doc(Give a unit direction, this function returns the squared sine of the
azimuth in a reference spherical coordinate system (see the Frame
description))doc";

static const char *__doc_mitsuba_Frame_sin_theta =
R"doc(Give a unit direction, this function returns the sine of the elevation
angle in a reference spherical coordinate system (see the Frame
description))doc";

static const char *__doc_mitsuba_Frame_sin_theta_2 =
R"doc(Give a unit direction, this function returns the square sine of the
elevation angle in a reference spherical coordinate system (see the
Frame description))doc";

static const char *__doc_mitsuba_Frame_sincos_phi =
R"doc(Give a unit direction, this function returns the sine and cosine of
the azimuth in a reference spherical coordinate system (see the Frame
description))doc";

static const char *__doc_mitsuba_Frame_sincos_phi_2 =
R"doc(Give a unit direction, this function returns the squared sine and
cosine of the azimuth in a reference spherical coordinate system (see
the Frame description))doc";

static const char *__doc_mitsuba_Frame_t = R"doc()doc";

static const char *__doc_mitsuba_Frame_tan_theta =
R"doc(Give a unit direction, this function returns the tangent of the
elevation angle in a reference spherical coordinate system (see the
Frame description))doc";

static const char *__doc_mitsuba_Frame_tan_theta_2 =
R"doc(Give a unit direction, this function returns the square tangent of the
elevation angle in a reference spherical coordinate system (see the
Frame description))doc";

static const char *__doc_mitsuba_Frame_to_local = R"doc(Convert from world coordinates to local coordinates)doc";

static const char *__doc_mitsuba_Frame_to_world = R"doc(Convert from local coordinates to world coordinates)doc";

static const char *__doc_mitsuba_GLTexture = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_EInterpolation = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_EInterpolation_ELinear = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_EInterpolation_EMipMapLinear = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_EInterpolation_ENearest = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_GLTexture = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_bind = R"doc(Bind the texture to a specific texture unit)doc";

static const char *__doc_mitsuba_GLTexture_class = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_free = R"doc(Release underlying OpenGL objects)doc";

static const char *__doc_mitsuba_GLTexture_id = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_init = R"doc(Create a new uniform texture)doc";

static const char *__doc_mitsuba_GLTexture_m_id = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_m_index = R"doc()doc";

static const char *__doc_mitsuba_GLTexture_refresh = R"doc(Refresh the texture from the provided bitmap)doc";

static const char *__doc_mitsuba_GLTexture_release = R"doc(Release/unbind the textur)doc";

static const char *__doc_mitsuba_GLTexture_set_interpolation = R"doc(Set the interpolation mode)doc";

static const char *__doc_mitsuba_IOREntry = R"doc()doc";

static const char *__doc_mitsuba_IOREntry_name = R"doc()doc";

static const char *__doc_mitsuba_IOREntry_value = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock =
R"doc(Storage for an image sub-block (a.k.a render bucket)

This class is used by image-based parallel processes and encapsulates
computed rectangular regions of an image. This allows for easy and
efficient distributed rendering of large images. Image blocks usually
also include a border region storing contributions that are slightly
outside of the block, which is required to support image
reconstruction filters.)doc";

static const char *__doc_mitsuba_ImageBlock_ImageBlock =
R"doc(Construct a new image block of the requested properties

Parameter ``fmt``:
    Specifies the pixel format -- see Bitmap::EPixelFormat for a list
    of possibilities

Parameter ``size``:
    Specifies the block dimensions (not accounting for additional
    border pixels required to support image reconstruction filters)

Parameter ``filter``:
    Pointer to the film's reconstruction filter. If passed, it is used
    to compute and store reconstruction weights. Note that it is
    mandatory when any of the block's put operations are used, except
    for ``put``(const ImageBlock*).

Parameter ``channels``:
    Specifies the number of output channels. This is only valid when
    Bitmap::EMultiChannel is chosen as the pixel format, otherwise
    pass 0 so that channels are set automatically from the pixel
    format.

Parameter ``warn``:
    Warn when writing bad sample values?)doc";

static const char *__doc_mitsuba_ImageBlock_bitmap = R"doc(Return a pointer to the underlying bitmap representation)doc";

static const char *__doc_mitsuba_ImageBlock_bitmap_2 =
R"doc(Return a pointer to the underlying bitmap representation (const
version))doc";

static const char *__doc_mitsuba_ImageBlock_border_size = R"doc(Return the border region used by the reconstruction filter)doc";

static const char *__doc_mitsuba_ImageBlock_channel_count = R"doc(Return the number of channels stored by the image block)doc";

static const char *__doc_mitsuba_ImageBlock_class = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_clear = R"doc(Clear everything to zero.)doc";

static const char *__doc_mitsuba_ImageBlock_height = R"doc(Return the bitmap's height in pixels)doc";

static const char *__doc_mitsuba_ImageBlock_m_bitmap = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_border_size = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_filter = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_monochrome = R"doc(Whether monochrome mode is enabled.)doc";

static const char *__doc_mitsuba_ImageBlock_m_offset = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_size = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_warn = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_weights_x = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_weights_x_p = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_weights_y = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_m_weights_y_p = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_offset = R"doc(Return the current block offset)doc";

static const char *__doc_mitsuba_ImageBlock_pixel_format = R"doc(Return the underlying pixel format)doc";

static const char *__doc_mitsuba_ImageBlock_put = R"doc(Accumulate another image block into this one)doc";

static const char *__doc_mitsuba_ImageBlock_put_2 =
R"doc(Store a single sample / packets of samples inside the image block.

\note This method is only valid if a reconstruction filter was given
at the construction of the block.

This variant assumes that the ImageBlock's internal storage format is
XYZAW. The given Spectrum will be converted to XYZ color space for
storage.

Parameter ``pos``:
    Denotes the sample position in fractional pixel coordinates. It is
    not checked, and so must be valid. The block's offset is
    subtracted from the given position to obtain the

Parameter ``wavelengths``:
    Sample wavelengths in nanometers

Parameter ``value``:
    Sample value assocated with the specified wavelengths

Parameter ``alpha``:
    Alpha value assocated with the sample

Returns:
    ``False`` if one of the sample values was *invalid*, e.g. NaN or
    negative. A warning is also printed if ``m_warn`` is enabled.)doc";

static const char *__doc_mitsuba_ImageBlock_put_3 =
R"doc(Store a single sample inside the block.

\note This method is only valid if a reconstruction filter was
provided when the block was constructed.

Parameter ``pos``:
    Denotes the sample position in fractional pixel coordinates. It is
    not checked, and so must be valid. The block's offset is
    subtracted from the given position to obtain the

Parameter ``value``:
    Pointer to an array containing each channel of the sample values.
    The array must match the length given by channel_count()

Returns:
    ``False`` if one of the sample values was *invalid*, e.g. NaN or
    negative. A warning is also printed if ``m_warn`` is enabled.)doc";

static const char *__doc_mitsuba_ImageBlock_put_4 = R"doc()doc";

static const char *__doc_mitsuba_ImageBlock_put_5 =
R"doc(Store a packet of samples inside the block.

\note This method is only valid if a reconstruction filter was given
at the construction of the block.

Parameter ``pos``:
    Denotes the samples positions in fractional pixel coordinates.

Parameter ``value``:
    Pointer to an array containing packets for each channel of the
    sample values. The array must match the length given by
    channel_count()

Returns:
    ``False`` if one of the sample values was *invalid*, e.g. NaN or
    negative. A warning is also printed if ``m_warn`` is enabled.)doc";

static const char *__doc_mitsuba_ImageBlock_set_offset =
R"doc(Set the current block offset. This corresponds to the offset from a
larger image's (e.g. a Film) corner to this block's corner.)doc";

static const char *__doc_mitsuba_ImageBlock_set_warn = R"doc(Warn when writing bad sample values?)doc";

static const char *__doc_mitsuba_ImageBlock_size = R"doc(Return the current block size)doc";

static const char *__doc_mitsuba_ImageBlock_to_string = R"doc(//! @})doc";

static const char *__doc_mitsuba_ImageBlock_warns = R"doc(Warn when writing bad sample values?)doc";

static const char *__doc_mitsuba_ImageBlock_width = R"doc(Return the bitmap's width in pixels)doc";

static const char *__doc_mitsuba_Integrator =
R"doc(Abstract integrator base-class; does not make any assumptions on how
radiance is computed.

In Mitsuba, the different rendering techniques are collectively
referred to as *integrators*, since they perform integration over a
high-dimensional space. Each integrator represents a specific approach
for solving the light transport equation---usually favored in certain
scenarios, but at the same time affected by its own set of intrinsic
limitations. Therefore, it is important to carefully select an
integrator based on user-specified accuracy requirements and
properties of the scene to be rendered.

This is the base class of all integrators; it does not make any
assumptions on how radiance is computed, which allows for many
different kinds of implementations ranging from software-based path
tracing and Markov-Chain based techniques such as Metropolis Light
Transport up to hardware-accelerated rasterization.)doc";

static const char *__doc_mitsuba_Integrator_CallbackInfo = R"doc()doc";

static const char *__doc_mitsuba_Integrator_CallbackInfo_CallbackInfo = R"doc()doc";

static const char *__doc_mitsuba_Integrator_CallbackInfo_f = R"doc()doc";

static const char *__doc_mitsuba_Integrator_CallbackInfo_last_called = R"doc()doc";

static const char *__doc_mitsuba_Integrator_CallbackInfo_period = R"doc()doc";

static const char *__doc_mitsuba_Integrator_Integrator = R"doc(Create an integrator)doc";

static const char *__doc_mitsuba_Integrator_callback_count = R"doc()doc";

static const char *__doc_mitsuba_Integrator_cancel =
R"doc(Cancel a running render job

This function can be called asynchronously to cancel a running render
job. In this case, render() will quit with a return value of
``False``.)doc";

static const char *__doc_mitsuba_Integrator_class = R"doc()doc";

static const char *__doc_mitsuba_Integrator_m_callbacks = R"doc(List of registered callback functions.)doc";

static const char *__doc_mitsuba_Integrator_m_cb_timer = R"doc(Timer used to enforce the callback rate limits.)doc";

static const char *__doc_mitsuba_Integrator_m_monochrome = R"doc(Whether monochrome mode is enabled.)doc";

static const char *__doc_mitsuba_Integrator_notify =
R"doc(Maybe trigger a call to the callbacks. This will be rate-limited so
that the period specified by the caller is respected *per-thread*
(i.e. each thread will count time independently).

Callbacks are called in the order the were registered.)doc";

static const char *__doc_mitsuba_Integrator_register_callback =
R"doc(Adds a callback function, which will be called with the desired
frequency. Not thread-safe.

@param cb Callback function to be called. @param period Minimum time
elapsed (in seconds) between two calls. May be zero, in which case the
callback is called at each iteration of the algorithm. @return The
index of this callback (used to de-register this callback).)doc";

static const char *__doc_mitsuba_Integrator_remove_callback =
R"doc(De-registers callback at the specified index. If (size_t) -1 is
passed, all callbacks are cleared.)doc";

static const char *__doc_mitsuba_Integrator_render = R"doc(Perform the main rendering job)doc";

static const char *__doc_mitsuba_Interaction = R"doc(Generic surface interaction data structure)doc";

static const char *__doc_mitsuba_Interaction_Interaction = R"doc()doc";

static const char *__doc_mitsuba_Interaction_Interaction_2 = R"doc()doc";

static const char *__doc_mitsuba_Interaction_Interaction_3 = R"doc()doc";

static const char *__doc_mitsuba_Interaction_Interaction_4 = R"doc()doc";

static const char *__doc_mitsuba_Interaction_is_valid = R"doc(Is the current interaction valid?)doc";

static const char *__doc_mitsuba_Interaction_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Interaction_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Interaction_p = R"doc(Position of the interaction in world coordinates)doc";

static const char *__doc_mitsuba_Interaction_spawn_ray = R"doc(Spawn a semi-infinite ray towards the given direction)doc";

static const char *__doc_mitsuba_Interaction_spawn_ray_to = R"doc(Spawn a finite ray towards the given position)doc";

static const char *__doc_mitsuba_Interaction_t = R"doc(Distance traveled along the ray)doc";

static const char *__doc_mitsuba_Interaction_time = R"doc(Time value associated with the interaction)doc";

static const char *__doc_mitsuba_Interaction_wavelengths = R"doc(Wavelengths associated with the ray that produced this interaction)doc";

static const char *__doc_mitsuba_Jit = R"doc()doc";

static const char *__doc_mitsuba_Jit_Jit = R"doc()doc";

static const char *__doc_mitsuba_Jit_Jit_2 = R"doc()doc";

static const char *__doc_mitsuba_Jit_get_instance = R"doc()doc";

static const char *__doc_mitsuba_Jit_mutex = R"doc()doc";

static const char *__doc_mitsuba_Jit_runtime = R"doc()doc";

static const char *__doc_mitsuba_Jit_static_initialization =
R"doc(Statically initialize the JIT runtime

This function also does a runtime-check to ensure that the host
processor supports all instruction sets which were selected at compile
time. If not, the application is terminated via ``abort``().)doc";

static const char *__doc_mitsuba_Jit_static_shutdown = R"doc(Release all memory used by JIT-compiled routines)doc";

static const char *__doc_mitsuba_Logger =
R"doc(Responsible for processing log messages

Upon receiving a log message, the Logger class invokes a Formatter to
convert it into a human-readable form. Following that, it sends this
information to every registered Appender.)doc";

static const char *__doc_mitsuba_Logger_Logger = R"doc(Construct a new logger with the given minimum log level)doc";

static const char *__doc_mitsuba_Logger_LoggerPrivate = R"doc()doc";

static const char *__doc_mitsuba_Logger_add_appender = R"doc(Add an appender to this logger)doc";

static const char *__doc_mitsuba_Logger_appender = R"doc(Return one of the appenders)doc";

static const char *__doc_mitsuba_Logger_appender_2 = R"doc(Return one of the appenders)doc";

static const char *__doc_mitsuba_Logger_appender_count = R"doc(Return the number of registered appenders)doc";

static const char *__doc_mitsuba_Logger_class = R"doc()doc";

static const char *__doc_mitsuba_Logger_clear_appenders = R"doc(Remove all appenders from this logger)doc";

static const char *__doc_mitsuba_Logger_d = R"doc()doc";

static const char *__doc_mitsuba_Logger_error_level = R"doc(Return the current error level)doc";

static const char *__doc_mitsuba_Logger_formatter = R"doc(Return the logger's formatter implementation)doc";

static const char *__doc_mitsuba_Logger_formatter_2 = R"doc(Return the logger's formatter implementation (const))doc";

static const char *__doc_mitsuba_Logger_log =
R"doc(Process a log message

Parameter ``level``:
    Log level of the message

Parameter ``class_``:
    Class descriptor of the message creator

Parameter ``filename``:
    Source file of the message creator

Parameter ``line``:
    Source line number of the message creator

Parameter ``fmt``:
    printf-style string formatter

\note This function is not exposed in the Python bindings. Instead,
please use \cc mitsuba.core.Log)doc";

static const char *__doc_mitsuba_Logger_log_level = R"doc(Return the current log level)doc";

static const char *__doc_mitsuba_Logger_log_progress =
R"doc(Process a progress message

Parameter ``progress``:
    Percentage value in [0, 100]

Parameter ``name``:
    Title of the progress message

Parameter ``formatted``:
    Formatted string representation of the message

Parameter ``eta``:
    Estimated time until 100% is reached.

Parameter ``ptr``:
    Custom pointer payload. This is used to express the context of a
    progress message. When rendering a scene, it will usually contain
    a pointer to the associated ``RenderJob``.)doc";

static const char *__doc_mitsuba_Logger_m_log_level = R"doc()doc";

static const char *__doc_mitsuba_Logger_read_log =
R"doc(Return the contents of the log file as a string

Throws a runtime exception upon failure)doc";

static const char *__doc_mitsuba_Logger_remove_appender = R"doc(Remove an appender from this logger)doc";

static const char *__doc_mitsuba_Logger_set_error_level =
R"doc(Set the error log level (this level and anything above will throw
exceptions).

The value provided here can be used for instance to turn warnings into
errors. But *level* must always be less than EError, i.e. it isn't
possible to cause errors not to throw an exception.)doc";

static const char *__doc_mitsuba_Logger_set_formatter = R"doc(Set the logger's formatter implementation)doc";

static const char *__doc_mitsuba_Logger_set_log_level = R"doc(Set the log level (everything below will be ignored))doc";

static const char *__doc_mitsuba_Logger_static_initialization = R"doc(Initialize logging)doc";

static const char *__doc_mitsuba_Logger_static_shutdown = R"doc(Shutdown logging)doc";

static const char *__doc_mitsuba_Medium = R"doc()doc";

static const char *__doc_mitsuba_Medium_class = R"doc()doc";

static const char *__doc_mitsuba_MemoryMappedFile =
R"doc(Basic cross-platform abstraction for memory mapped files

Remark:
    The Python API has one additional constructor
    <tt>MemoryMappedFile(filename, array)<tt>, which creates a new
    file, maps it into memory, and copies the array contents.)doc";

static const char *__doc_mitsuba_MemoryMappedFile_MemoryMappedFile = R"doc(Create a new memory-mapped file of the specified size)doc";

static const char *__doc_mitsuba_MemoryMappedFile_MemoryMappedFile_2 = R"doc(Map the specified file into memory)doc";

static const char *__doc_mitsuba_MemoryMappedFile_MemoryMappedFile_3 = R"doc(Internal constructor)doc";

static const char *__doc_mitsuba_MemoryMappedFile_MemoryMappedFilePrivate = R"doc()doc";

static const char *__doc_mitsuba_MemoryMappedFile_can_write = R"doc(Return whether the mapped memory region can be modified)doc";

static const char *__doc_mitsuba_MemoryMappedFile_class = R"doc()doc";

static const char *__doc_mitsuba_MemoryMappedFile_create_temporary =
R"doc(Create a temporary memory-mapped file

Remark:
    When closing the mapping, the file is automatically deleted.
    Mitsuba additionally informs the OS that any outstanding changes
    that haven't yet been written to disk can be discarded (Linux/OSX
    only).)doc";

static const char *__doc_mitsuba_MemoryMappedFile_d = R"doc()doc";

static const char *__doc_mitsuba_MemoryMappedFile_data = R"doc(Return a pointer to the file contents in memory)doc";

static const char *__doc_mitsuba_MemoryMappedFile_data_2 = R"doc(Return a pointer to the file contents in memory (const version))doc";

static const char *__doc_mitsuba_MemoryMappedFile_filename = R"doc(Return the associated filename)doc";

static const char *__doc_mitsuba_MemoryMappedFile_resize =
R"doc(Resize the memory-mapped file

This involves remapping the file, which will generally change the
pointer obtained via data())doc";

static const char *__doc_mitsuba_MemoryMappedFile_size = R"doc(Return the size of the mapped region)doc";

static const char *__doc_mitsuba_MemoryMappedFile_to_string = R"doc(Return a string representation)doc";

static const char *__doc_mitsuba_MemoryStream =
R"doc(Simple memory buffer-based stream with automatic memory management. It
always has read & write capabilities.

The underlying memory storage of this implementation dynamically
expands as data is written to the stream, à la ``std::vector``.)doc";

static const char *__doc_mitsuba_MemoryStream_MemoryStream =
R"doc(Creates a new memory stream, initializing the memory buffer with a
capacity of ``capacity`` bytes. For best performance, set this
argument to the estimated size of the content that will be written to
the stream.)doc";

static const char *__doc_mitsuba_MemoryStream_MemoryStream_2 =
R"doc(Creates a memory stream, which operates on a pre-allocated buffer.

A memory stream created in this way will never resize the underlying
buffer. An exception is thrown e.g. when attempting to extend its
size.

Remark:
    This constructor is not available in the python bindings.)doc";

static const char *__doc_mitsuba_MemoryStream_can_read = R"doc(Always returns true, except if the stream is closed.)doc";

static const char *__doc_mitsuba_MemoryStream_can_write = R"doc(Always returns true, except if the stream is closed.)doc";

static const char *__doc_mitsuba_MemoryStream_capacity = R"doc(Return the current capacity of the underlying memory buffer)doc";

static const char *__doc_mitsuba_MemoryStream_class = R"doc()doc";

static const char *__doc_mitsuba_MemoryStream_close =
R"doc(Closes the stream. No further read or write operations are permitted.

This function is idempotent. It may be called automatically by the
destructor.)doc";

static const char *__doc_mitsuba_MemoryStream_flush = R"doc(No-op since all writes are made directly to memory)doc";

static const char *__doc_mitsuba_MemoryStream_is_closed = R"doc(Whether the stream is closed (no read or write are then permitted).)doc";

static const char *__doc_mitsuba_MemoryStream_m_capacity = R"doc(Current size of the allocated memory buffer)doc";

static const char *__doc_mitsuba_MemoryStream_m_data = R"doc(Pointer to the memory buffer (might not be owned))doc";

static const char *__doc_mitsuba_MemoryStream_m_is_closed = R"doc(Whether the stream has been closed.)doc";

static const char *__doc_mitsuba_MemoryStream_m_owns_buffer = R"doc(False if the MemoryStream was created from a pre-allocated buffer)doc";

static const char *__doc_mitsuba_MemoryStream_m_pos = R"doc(Current position inside of the memory buffer)doc";

static const char *__doc_mitsuba_MemoryStream_m_size = R"doc(Current size of the contents written to the memory buffer)doc";

static const char *__doc_mitsuba_MemoryStream_owns_buffer = R"doc(Return whether or not the memory stream owns the underlying buffer)doc";

static const char *__doc_mitsuba_MemoryStream_read =
R"doc(Reads a specified amount of data from the stream. Throws an exception
if trying to read further than the current size of the contents.)doc";

static const char *__doc_mitsuba_MemoryStream_resize = R"doc()doc";

static const char *__doc_mitsuba_MemoryStream_seek =
R"doc(Seeks to a position inside the stream. You may seek beyond the size of
the stream's contents, or even beyond the buffer's capacity. The size
and capacity are **not** affected. A subsequent write would then
expand the size and capacity accordingly. The contents of the memory
that was skipped is undefined.)doc";

static const char *__doc_mitsuba_MemoryStream_size =
R"doc(Returns the size of the contents written to the memory buffer. \note
This is not equal to the size of the memory buffer in general, since
we allocate more capacity at once.)doc";

static const char *__doc_mitsuba_MemoryStream_tell =
R"doc(Gets the current position inside the memory buffer. Note that this
might be further than the stream's size or even capacity.)doc";

static const char *__doc_mitsuba_MemoryStream_to_string = R"doc(Returns a string representation)doc";

static const char *__doc_mitsuba_MemoryStream_truncate =
R"doc(Truncates the contents **and** the memory buffer's capacity to a given
size. The position is updated to ``min(old_position, size)``.

\note This will throw is the MemoryStream was initialized with a pre-
allocated buffer.)doc";

static const char *__doc_mitsuba_MemoryStream_write =
R"doc(Writes a specified amount of data into the memory buffer. The capacity
of the memory buffer is extended if necessary.)doc";

static const char *__doc_mitsuba_Mesh = R"doc()doc";

static const char *__doc_mitsuba_Mesh_Mesh = R"doc(Create a new mesh with the given vertex and face data structures)doc";

static const char *__doc_mitsuba_Mesh_Mesh_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_Mesh_3 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_bbox = R"doc(//! @{ \name Shape interface implementation)doc";

static const char *__doc_mitsuba_Mesh_bbox_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_bbox_3 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_class = R"doc()doc";

static const char *__doc_mitsuba_Mesh_ensure_table_ready =
R"doc(Ensures that the sampling table is ready. This function is not really
const, but only makes (thread-safe) writes to m_area_distribution,
m_surface_area, and m_inv_surface_area.)doc";

static const char *__doc_mitsuba_Mesh_face = R"doc(Return a pointer (or packet of pointers) to a specific face)doc";

static const char *__doc_mitsuba_Mesh_face_2 =
R"doc(Return a pointer (or packet of pointers) to a specific face (const
version))doc";

static const char *__doc_mitsuba_Mesh_face_area = R"doc(Returns the surface area of the face with index ``index``)doc";

static const char *__doc_mitsuba_Mesh_face_count = R"doc(Return the total number of faces)doc";

static const char *__doc_mitsuba_Mesh_face_indices = R"doc(Returns the face indices associated with triangle ``index``)doc";

static const char *__doc_mitsuba_Mesh_face_indices_2 = R"doc(Vectorized version of face_indices())doc";

static const char *__doc_mitsuba_Mesh_face_indices_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
face_indices())doc";

static const char *__doc_mitsuba_Mesh_face_struct =
R"doc(Return a ``Struct`` instance describing the contents of the face
buffer)doc";

static const char *__doc_mitsuba_Mesh_faces = R"doc(Const variant of faces.)doc";

static const char *__doc_mitsuba_Mesh_faces_2 = R"doc(Return a pointer to the raw face buffer)doc";

static const char *__doc_mitsuba_Mesh_fill_surface_interaction = R"doc()doc";

static const char *__doc_mitsuba_Mesh_fill_surface_interaction_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_fill_surface_interaction_impl = R"doc()doc";

static const char *__doc_mitsuba_Mesh_has_vertex_colors = R"doc(Does this mesh have per-vertex texture colors?)doc";

static const char *__doc_mitsuba_Mesh_has_vertex_normals = R"doc(Does this mesh have per-vertex normals?)doc";

static const char *__doc_mitsuba_Mesh_has_vertex_texcoords = R"doc(Does this mesh have per-vertex texture coordinates?)doc";

static const char *__doc_mitsuba_Mesh_m_area_distribution =
R"doc(Surface area distribution -- generated on demand when
prepare_sampling_table() is first calls. The value of m_surface_area
is negative until it has been computed.)doc";

static const char *__doc_mitsuba_Mesh_m_bbox = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_color_offset = R"doc(Byte offset of the color data within the vertex buffer)doc";

static const char *__doc_mitsuba_Mesh_m_disable_vertex_normals = R"doc(Flag that can be set by the user to disable loading of vertex normals)doc";

static const char *__doc_mitsuba_Mesh_m_face_count = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_face_size = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_face_struct = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_faces = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_inv_surface_area = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_mutex = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_name = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_normal_offset = R"doc(Byte offset of the normal data within the vertex buffer)doc";

static const char *__doc_mitsuba_Mesh_m_surface_area = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_texcoord_offset = R"doc(Byte offset of the texture coordinate data within the vertex buffer)doc";

static const char *__doc_mitsuba_Mesh_m_to_world = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_vertex_count = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_vertex_size = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_vertex_struct = R"doc()doc";

static const char *__doc_mitsuba_Mesh_m_vertices = R"doc()doc";

static const char *__doc_mitsuba_Mesh_normal_derivative = R"doc()doc";

static const char *__doc_mitsuba_Mesh_normal_derivative_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_normal_derivative_impl = R"doc()doc";

static const char *__doc_mitsuba_Mesh_pdf_position = R"doc()doc";

static const char *__doc_mitsuba_Mesh_pdf_position_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_pdf_position_impl = R"doc()doc";

static const char *__doc_mitsuba_Mesh_prepare_sampling_table =
R"doc(Prepare internal tables for sampling uniformly wrt. area.

Computes the surface area and sets up m_area_distribution. Thread-
safe, since it uses a mutex.)doc";

static const char *__doc_mitsuba_Mesh_primitive_count = R"doc()doc";

static const char *__doc_mitsuba_Mesh_ray_intersect_triangle =
R"doc(Ray-triangle intersection test

Uses the algorithm by Moeller and Trumbore discussed at
``http://www.acm.org/jgt/papers/MollerTrumbore97/code.html``.

Parameter ``index``:
    Index of the triangle to be intersected.

Parameter ``ray``:
    The ray segment to be used for the intersection query.

Returns:
    Returns an ordered tuple ``(mask, u, v, t)``, where ``mask``
    indicates whether an intersection was found, ``t`` contains the
    distance from the ray origin to the intersection point, and ``u``
    and ``v`` contains the first two components of the intersection in
    barycentric coordinates)doc";

static const char *__doc_mitsuba_Mesh_recompute_bbox = R"doc(Recompute the bounding box (e.g. after modifying the vertex positions))doc";

static const char *__doc_mitsuba_Mesh_recompute_vertex_normals = R"doc(Compute smooth vertex normals and replace the current normal values)doc";

static const char *__doc_mitsuba_Mesh_sample_position = R"doc()doc";

static const char *__doc_mitsuba_Mesh_sample_position_2 = R"doc()doc";

static const char *__doc_mitsuba_Mesh_sample_position_impl = R"doc()doc";

static const char *__doc_mitsuba_Mesh_surface_area = R"doc()doc";

static const char *__doc_mitsuba_Mesh_to_string = R"doc(Return a human-readable string representation of the shape contents.)doc";

static const char *__doc_mitsuba_Mesh_vertex = R"doc(Return a pointer (or packet of pointers) to a specific vertex)doc";

static const char *__doc_mitsuba_Mesh_vertex_2 =
R"doc(Return a pointer (or packet of pointers) to a specific vertex (const
version))doc";

static const char *__doc_mitsuba_Mesh_vertex_count = R"doc(Return the total number of vertices)doc";

static const char *__doc_mitsuba_Mesh_vertex_normal = R"doc(Returns the normal direction of the vertex with index ``index``)doc";

static const char *__doc_mitsuba_Mesh_vertex_normal_2 = R"doc(Vectorized version of vertex_normal())doc";

static const char *__doc_mitsuba_Mesh_vertex_normal_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
vertex_normal())doc";

static const char *__doc_mitsuba_Mesh_vertex_position = R"doc(Returns the world-space position of the vertex with index ``index``)doc";

static const char *__doc_mitsuba_Mesh_vertex_position_2 = R"doc(Vectorized version of vertex_position())doc";

static const char *__doc_mitsuba_Mesh_vertex_position_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
vertex_position())doc";

static const char *__doc_mitsuba_Mesh_vertex_struct =
R"doc(Return a ``Struct`` instance describing the contents of the vertex
buffer)doc";

static const char *__doc_mitsuba_Mesh_vertex_texcoord = R"doc(Returns the UV texture coordinates of the vertex with index ``index``)doc";

static const char *__doc_mitsuba_Mesh_vertex_texcoord_2 = R"doc(Vectorized version of vertex_texcoord())doc";

static const char *__doc_mitsuba_Mesh_vertex_texcoord_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
vertex_texcoord())doc";

static const char *__doc_mitsuba_Mesh_vertices = R"doc(Return a pointer to the raw vertex buffer)doc";

static const char *__doc_mitsuba_Mesh_vertices_2 = R"doc(Const variant of vertices.)doc";

static const char *__doc_mitsuba_Mesh_write = R"doc(Export mesh using the file format implemented by the subclass)doc";

static const char *__doc_mitsuba_MicrofacetDistribution =
R"doc(Implementation of the Beckman and GGX / Trowbridge-Reitz microfacet
distributions and various useful sampling routines

Based on the papers

"Microfacet Models for Refraction through Rough Surfaces" by Bruce
Walter, Stephen R. Marschner, Hongsong Li, and Kenneth E. Torrance

and

"Importance Sampling Microfacet-Based BSDFs using the Distribution of
Visible Normals" by Eric Heitz and Eugene D'Eon

The visible normal sampling code was provided by Eric Heitz and Eugene
D'Eon. An improvement of the Beckmann model sampling routine is
discussed in

"An Improved Visible Normal Sampling Routine for the Beckmann
Distribution" by Wenzel Jakob

An improvement of the GGX model sampling routine is discussed in "A
Simpler and Exact Sampling Routine for the GGX Distribution of Visible
Normals" by Eric Heitz)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_G = R"doc(Smith's separable shadowing-masking approximation)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_MicrofacetDistribution =
R"doc(Create an isotropic microfacet distribution of the specified type

Parameter ``type``:
    The desired type of microfacet distribution

Parameter ``alpha``:
    The surface roughness)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_MicrofacetDistribution_2 =
R"doc(Create an anisotropic microfacet distribution of the specified type

Parameter ``type``:
    The desired type of microfacet distribution

Parameter ``alpha_u``:
    The surface roughness in the tangent direction

Parameter ``alpha_v``:
    The surface roughness in the bitangent direction)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_MicrofacetDistribution_3 = R"doc(Create a microfacet distribution from a Property data structure)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_alpha = R"doc(Return the roughness (isotropic case))doc";

static const char *__doc_mitsuba_MicrofacetDistribution_alpha_u = R"doc(Return the roughness along the tangent direction)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_alpha_v = R"doc(Return the roughness along the bitangent direction)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_configure = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_eval =
R"doc(Evaluate the microfacet distribution function

Parameter ``m``:
    The microfacet normal)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_eval_reflectance = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_eval_reflectance_kernel = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_is_anisotropic = R"doc(Is this an anisotropic microfacet distribution?)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_is_isotropic = R"doc(Is this an isotropic microfacet distribution?)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_m_alpha_u = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_m_alpha_v = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_m_sample_visible = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_m_type = R"doc()doc";

static const char *__doc_mitsuba_MicrofacetDistribution_pdf =
R"doc(Returns the density function associated with the sample() function.

Parameter ``wi``:
    The incident direction (only relevant if visible normal sampling
    is used)

Parameter ``m``:
    The microfacet normal)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_project_roughness_2 = R"doc(Compute the squared 1D roughness along direction ``v``)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_sample =
R"doc(Draw a sample from the microfacet normal distribution and return the
associated probability density

Parameter ``sample``:
    A uniformly distributed 2D sample

Parameter ``pdf``:
    The probability density wrt. solid angles)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_sample_visible = R"doc(Return whether or not only visible normals are sampled?)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_sample_visible_11 = R"doc(Visible normal sampling code for the alpha=1 case)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_scale_alpha = R"doc(Scale the roughness values by some constant)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_smith_g1 =
R"doc(Smith's shadowing-masking function for a single direction

Parameter ``v``:
    An arbitrary direction

Parameter ``m``:
    The microfacet normal)doc";

static const char *__doc_mitsuba_MicrofacetDistribution_type = R"doc(Return the distribution type)doc";

static const char *__doc_mitsuba_MonteCarloIntegrator = R"doc()doc";

static const char *__doc_mitsuba_MonteCarloIntegrator_MonteCarloIntegrator = R"doc(Create an integrator)doc";

static const char *__doc_mitsuba_MonteCarloIntegrator_class = R"doc()doc";

static const char *__doc_mitsuba_MonteCarloIntegrator_m_max_depth = R"doc()doc";

static const char *__doc_mitsuba_MonteCarloIntegrator_m_rr_depth = R"doc()doc";

static const char *__doc_mitsuba_NamedReference = R"doc(Wrapper object used to represent named references to Object instances)doc";

static const char *__doc_mitsuba_NamedReference_NamedReference = R"doc()doc";

static const char *__doc_mitsuba_NamedReference_m_value = R"doc()doc";

static const char *__doc_mitsuba_NamedReference_operator_const_std_1_basic_string = R"doc()doc";

static const char *__doc_mitsuba_NamedReference_operator_eq = R"doc()doc";

static const char *__doc_mitsuba_NamedReference_operator_ne = R"doc()doc";

static const char *__doc_mitsuba_Normal = R"doc()doc";

static const char *__doc_mitsuba_Normal_Normal = R"doc()doc";

static const char *__doc_mitsuba_Normal_Normal_2 = R"doc()doc";

static const char *__doc_mitsuba_Normal_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Normal_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Object =
R"doc(Object base class with builtin reference counting

This class (in conjunction with the 'ref' reference counter)
constitutes the foundation of an efficient reference-counted object
hierarchy. The implementation here is an alternative to standard
mechanisms for reference counting such as ``std::shared_ptr`` from the
STL.

Why not simply use ``std::shared_ptr``? To be spec-compliant, such
shared pointers must associate a special record with every instance,
which stores at least two counters plus a deletion function.
Allocating this record naturally incurs further overheads to maintain
data structures within the memory allocator. In addition to this, the
size of an individual ``shared_ptr`` references is at least two data
words. All of this quickly adds up and leads to significant overheads
for large collections of instances, hence the need for an alternative
in Mitsuba.

In contrast, the ``Object`` class allows for a highly efficient
implementation that only adds 32 bits to the base object (for the
counter) and has no overhead for references.)doc";

static const char *__doc_mitsuba_Object_Object = R"doc(Default constructor)doc";

static const char *__doc_mitsuba_Object_Object_2 = R"doc(Copy constructor)doc";

static const char *__doc_mitsuba_Object_class =
R"doc(Return a Class instance containing run-time type information about
this Object

See also:
    Class)doc";

static const char *__doc_mitsuba_Object_dec_ref =
R"doc(Decrease the reference count of the object and possibly deallocate it.

The object will automatically be deallocated once the reference count
reaches zero.)doc";

static const char *__doc_mitsuba_Object_expand =
R"doc(Expand the object into a list of sub-objects and return them

In some cases, an Object instance is merely a container for a number
of sub-objects. In the context of Mitsuba, an example would be a sun &
sky emitter instantiated via XML, which recursively expands into a sun
& separate sky emitter. This functionality is supported by any Mitsuba
object, hence it is located this level.)doc";

static const char *__doc_mitsuba_Object_inc_ref = R"doc(Increase the object's reference count by one)doc";

static const char *__doc_mitsuba_Object_m_ref_count = R"doc()doc";

static const char *__doc_mitsuba_Object_ref_count = R"doc(Return the current reference count)doc";

static const char *__doc_mitsuba_Object_to_string =
R"doc(Return a human-readable string representation of the object's
contents.

This function is mainly useful for debugging purposes and should
ideally be implemented by all subclasses. The default implementation
simply returns ``MyObject[<address of 'this' pointer>]``, where
``MyObject`` is the name of the class.)doc";

static const char *__doc_mitsuba_PluginManager =
R"doc(The object factory is responsible for loading plugin modules and
instantiating object instances.

Ordinarily, this class will be used by making repeated calls to the
create_object() methods. The generated instances are then assembled
into a final object graph, such as a scene. One such examples is the
SceneHandler class, which parses an XML scene file by esentially
translating the XML elements into calls to create_object().

Since this kind of construction method can be tiresome when
dynamically building scenes from Python, this class has an additional
Python-only method ``create``(), which works as follows:

```
from mitsuba.core import *

pmgr = PluginManager.instance()
camera = pmgr.create({
    "type" : "perspective",
    "to_world" : Transform.look_at(
        Point3f(0, 0, -10),
        Point3f(0, 0, 0),
        Vector3f(0, 1, 0)
    ),
    "film" : {
        "type" : "ldrfilm",
        "width" : 1920,
        "height" : 1080
    }
})
```

The above snippet constructs a Camera instance from a plugin named
``perspective``.so/dll/dylib and adds a child object named ``film``,
which is a Film instance loaded from the plugin
``ldrfilm``.so/dll/dylib. By the time the function returns, the object
hierarchy has already been assembled.)doc";

static const char *__doc_mitsuba_PluginManager_PluginManager = R"doc()doc";

static const char *__doc_mitsuba_PluginManager_PluginManagerPrivate = R"doc()doc";

static const char *__doc_mitsuba_PluginManager_class = R"doc()doc";

static const char *__doc_mitsuba_PluginManager_create_object =
R"doc(Instantiate a plugin, verify its type, and return the newly created
object instance.

Parameter ``props``:
    A Properties instance containing all information required to find
    and construct the plugin.

Parameter ``class_type``:
    Expected type of the instance. An exception will be thrown if it
    turns out not to derive from this class.)doc";

static const char *__doc_mitsuba_PluginManager_create_object_2 = R"doc(Convenience template wrapper around create_object())doc";

static const char *__doc_mitsuba_PluginManager_create_object_3 =
R"doc(Instantiate a plugin and return the new instance (without verifying
its type).

Parameter ``props``:
    A Properties instance containing all information required to find
    and construct the plugin.)doc";

static const char *__doc_mitsuba_PluginManager_d = R"doc()doc";

static const char *__doc_mitsuba_PluginManager_ensure_plugin_loaded = R"doc(Ensure that a plugin is loaded and ready)doc";

static const char *__doc_mitsuba_PluginManager_instance = R"doc(Return the global plugin manager)doc";

static const char *__doc_mitsuba_PluginManager_loaded_plugins = R"doc(Return the list of loaded plugins)doc";

static const char *__doc_mitsuba_Point = R"doc()doc";

static const char *__doc_mitsuba_Point_Point = R"doc()doc";

static const char *__doc_mitsuba_Point_Point_2 = R"doc()doc";

static const char *__doc_mitsuba_Point_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Point_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample =
R"doc(Generic sampling record for positions

This sampling record is used to implement techniques that draw a
position from a point, line, surface, or volume domain in 3D and
furthermore provide auxilary information about the sample.

Apart from returning the position and (optionally) the surface normal,
the responsible sampling method must annotate the record with the
associated probability density and delta.)doc";

static const char *__doc_mitsuba_PositionSample_PositionSample =
R"doc(Create a position sampling record from a surface intersection

This is useful to determine the hypothetical sampling density on a
surface after hitting it using standard ray tracing. This happens for
instance in path tracing with multiple importance sampling.)doc";

static const char *__doc_mitsuba_PositionSample_PositionSample_2 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_PositionSample_3 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_PositionSample_4 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_PositionSample_5 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_delta =
R"doc(Set if the sample was drawn from a degenerate (Dirac delta)
distribution

Note: we use an array of booleans instead of a mask, so that slicing a
dynamic array of PositionSample remains possible even on architectures
where scalar_t<Mask> != bool (e.g. Knights Landing).)doc";

static const char *__doc_mitsuba_PositionSample_n = R"doc(Sampled surface normal (if applicable))doc";

static const char *__doc_mitsuba_PositionSample_object =
R"doc(Optional: pointer to an associated object

In some uses of this record, sampling a position also involves
choosing one of several objects (shapes, emitters, ..) on which the
position lies. In that case, the ``object`` attribute stores a pointer
to this object.)doc";

static const char *__doc_mitsuba_PositionSample_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_PositionSample_p = R"doc(Sampled position)doc";

static const char *__doc_mitsuba_PositionSample_pdf = R"doc(Probability density at the sample)doc";

static const char *__doc_mitsuba_PositionSample_time = R"doc(Associated time value)doc";

static const char *__doc_mitsuba_PositionSample_uv =
R"doc(Optional: 2D sample position associated with the record

In some uses of this record, a sampled position may be associated with
an important 2D quantity, such as the texture coordinates on a
triangle mesh or a position on the aperture of a sensor. When
applicable, such positions are stored in the ``uv`` attribute.)doc";

static const char *__doc_mitsuba_Profiler = R"doc()doc";

static const char *__doc_mitsuba_Profiler_Profiler = R"doc()doc";

static const char *__doc_mitsuba_Profiler_class = R"doc()doc";

static const char *__doc_mitsuba_Profiler_print_report = R"doc()doc";

static const char *__doc_mitsuba_Profiler_static_initialization = R"doc()doc";

static const char *__doc_mitsuba_Profiler_static_shutdown = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter =
R"doc(General-purpose progress reporter

This class is used to track the progress of various operations that
might take longer than a second or so. It provides interactive
feedback when Mitsuba is run on the console, via the OpenGL GUI, or in
Jupyter Notebook.)doc";

static const char *__doc_mitsuba_ProgressReporter_ProgressReporter =
R"doc(Construct a new progress reporter.

Parameter ``label``:
    An identifying name for the operation taking place (e.g.
    "Rendering")

Parameter ``ptr``:
    Custom pointer payload to be delivered as part of progress
    messages)doc";

static const char *__doc_mitsuba_ProgressReporter_class = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_bar_size = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_bar_start = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_label = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_last_progress = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_last_update = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_line = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_payload = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_m_timer = R"doc()doc";

static const char *__doc_mitsuba_ProgressReporter_update =
R"doc(Update the progress to ``progress`` (which should be in the range [0,
1]))doc";

static const char *__doc_mitsuba_ProjectiveCamera =
R"doc(Projective camera interface

This class provides an abstract interface to several types of sensors
that are commonly used in computer graphics, such as perspective and
orthographic camera models.

The interface is meant to be implemented by any kind of sensor, whose
world to clip space transformation can be explained using only linear
operations on homogeneous coordinates.

A useful feature of ProjectiveCamera sensors is that their view can be
rendered using the traditional OpenGL pipeline.)doc";

static const char *__doc_mitsuba_ProjectiveCamera_ProjectiveCamera = R"doc()doc";

static const char *__doc_mitsuba_ProjectiveCamera_class = R"doc()doc";

static const char *__doc_mitsuba_ProjectiveCamera_far_clip = R"doc(Return the far clip plane distance)doc";

static const char *__doc_mitsuba_ProjectiveCamera_focus_distance = R"doc(Return the distance to the focal plane)doc";

static const char *__doc_mitsuba_ProjectiveCamera_m_far_clip = R"doc()doc";

static const char *__doc_mitsuba_ProjectiveCamera_m_focus_distance = R"doc()doc";

static const char *__doc_mitsuba_ProjectiveCamera_m_near_clip = R"doc()doc";

static const char *__doc_mitsuba_ProjectiveCamera_near_clip = R"doc(Return the near clip plane distance)doc";

static const char *__doc_mitsuba_Properties =
R"doc(Associative parameter map for constructing subclasses of Object.

Note that the Python bindings for this class do not implement the
various type-dependent getters and setters. Instead, they are accessed
just like a normal Python map, e.g:

XXX update

```
myProps = mitsuba.core.Properties("plugin_name")
myProps["stringProperty"] = "hello"
myProps["spectrumProperty"] = mitsuba.core.Spectrum(1.0)
```)doc";

static const char *__doc_mitsuba_Properties_EType = R"doc(Supported types of properties)doc";

static const char *__doc_mitsuba_Properties_EType_EAnimatedTransform = R"doc(An animated 4x4 transformation)doc";

static const char *__doc_mitsuba_Properties_EType_EBool = R"doc(Boolean value (true/false))doc";

static const char *__doc_mitsuba_Properties_EType_EColor = R"doc(Tristimulus color value)doc";

static const char *__doc_mitsuba_Properties_EType_EFloat = R"doc(Floating point value)doc";

static const char *__doc_mitsuba_Properties_EType_ELong = R"doc(64-bit signed integer)doc";

static const char *__doc_mitsuba_Properties_EType_ENamedReference = R"doc(Named reference to another named object)doc";

static const char *__doc_mitsuba_Properties_EType_EObject = R"doc(Arbitrary object)doc";

static const char *__doc_mitsuba_Properties_EType_EPoint3f = R"doc(3D point)doc";

static const char *__doc_mitsuba_Properties_EType_EPointer = R"doc(const void* pointer (for internal communication between plugins))doc";

static const char *__doc_mitsuba_Properties_EType_EString = R"doc(String)doc";

static const char *__doc_mitsuba_Properties_EType_ETransform = R"doc(4x4 transform for homogeneous coordinates)doc";

static const char *__doc_mitsuba_Properties_EType_EVector3f = R"doc(3D vector)doc";

static const char *__doc_mitsuba_Properties_Properties = R"doc(Construct an empty property container)doc";

static const char *__doc_mitsuba_Properties_Properties_2 = R"doc(Construct an empty property container with a specific plugin name)doc";

static const char *__doc_mitsuba_Properties_Properties_3 = R"doc(Copy constructor)doc";

static const char *__doc_mitsuba_Properties_PropertiesPrivate = R"doc()doc";

static const char *__doc_mitsuba_Properties_animated_transform = R"doc(Retrieve an animated transformation)doc";

static const char *__doc_mitsuba_Properties_animated_transform_2 =
R"doc(Retrieve an animated transformation (use default value if no entry
exists))doc";

static const char *__doc_mitsuba_Properties_animated_transform_3 =
R"doc(Retrieve an animated transformation (default value is a constant
transform))doc";

static const char *__doc_mitsuba_Properties_as_string = R"doc(Return one of the parameters (converting it to a string if necessary))doc";

static const char *__doc_mitsuba_Properties_as_string_2 =
R"doc(Return one of the parameters (converting it to a string if necessary,
with default value))doc";

static const char *__doc_mitsuba_Properties_bool = R"doc(Retrieve a boolean value)doc";

static const char *__doc_mitsuba_Properties_bool_2 = R"doc(Retrieve a boolean value (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_color = R"doc(Retrieve a color)doc";

static const char *__doc_mitsuba_Properties_color_2 = R"doc(Retrieve a color (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_copy_attribute =
R"doc(Copy a single attribute from another Properties object and potentially
rename it)doc";

static const char *__doc_mitsuba_Properties_d = R"doc()doc";

static const char *__doc_mitsuba_Properties_float = R"doc(Retrieve a floating point value)doc";

static const char *__doc_mitsuba_Properties_float_2 = R"doc(Retrieve a floating point value (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_has_property = R"doc(Verify if a value with the specified name exists)doc";

static const char *__doc_mitsuba_Properties_id =
R"doc(Returns a unique identifier associated with this instance (or an empty
string))doc";

static const char *__doc_mitsuba_Properties_int = R"doc(Retrieve an integer value)doc";

static const char *__doc_mitsuba_Properties_int_2 = R"doc(Retrieve an integer value (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_long = R"doc(Retrieve a long value)doc";

static const char *__doc_mitsuba_Properties_long_2 = R"doc(Retrieve a long value (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_mark_queried =
R"doc(Manually mark a certain property as queried

Returns:
    ``True`` upon success)doc";

static const char *__doc_mitsuba_Properties_merge =
R"doc(Merge another properties record into the current one.

Existing properties will be overwritten with the values from ``props``
if they have the same name.)doc";

static const char *__doc_mitsuba_Properties_named_reference = R"doc(Retrieve a named reference value)doc";

static const char *__doc_mitsuba_Properties_named_reference_2 =
R"doc(Retrieve a named reference value (use default value if no entry
exists))doc";

static const char *__doc_mitsuba_Properties_named_references = R"doc(Return an array containing all named references and their destinations)doc";

static const char *__doc_mitsuba_Properties_object = R"doc(Retrieve an arbitrary object)doc";

static const char *__doc_mitsuba_Properties_object_2 = R"doc(Retrieve an arbitrary object (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_objects =
R"doc(Return an array containing names and references for all stored objects
and)doc";

static const char *__doc_mitsuba_Properties_operator_assign = R"doc(Assignment operator)doc";

static const char *__doc_mitsuba_Properties_operator_eq = R"doc(Equality comparison operator)doc";

static const char *__doc_mitsuba_Properties_operator_ne = R"doc(Inequality comparison operator)doc";

static const char *__doc_mitsuba_Properties_plugin_name = R"doc(Get the associated plugin name)doc";

static const char *__doc_mitsuba_Properties_point3f = R"doc(Retrieve a 3D point)doc";

static const char *__doc_mitsuba_Properties_point3f_2 = R"doc(Retrieve a 3D point (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_pointer = R"doc(Retrieve an arbitrary pointer)doc";

static const char *__doc_mitsuba_Properties_pointer_2 = R"doc(Retrieve an arbitrary pointer (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_property_names = R"doc(Return an array containing the names of all stored properties)doc";

static const char *__doc_mitsuba_Properties_remove_property =
R"doc(Remove a property with the specified name

Returns:
    ``True`` upon success)doc";

static const char *__doc_mitsuba_Properties_set_animated_transform = R"doc(Store an animated transformation in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_animated_transform_2 = R"doc(Store a (constant) animated transformation in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_bool = R"doc(Store a boolean value in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_color = R"doc(Store a color in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_float = R"doc(Store a floating point value in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_id = R"doc(Set the unique identifier associated with this instance)doc";

static const char *__doc_mitsuba_Properties_set_int = R"doc(Set an integer value in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_long = R"doc(Store a long value in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_named_reference = R"doc(Store a named reference in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_object = R"doc(Store an arbitrary object in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_plugin_name = R"doc(Set the associated plugin name)doc";

static const char *__doc_mitsuba_Properties_set_point3f = R"doc(Store a 3D point in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_pointer = R"doc(Store an arbitrary pointer in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_string = R"doc(Store a string in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_set_transform =
R"doc(Store a 4x4 homogeneous coordinate transformation in the Properties
instance)doc";

static const char *__doc_mitsuba_Properties_set_vector3f = R"doc(Store a 3D vector in the Properties instance)doc";

static const char *__doc_mitsuba_Properties_size =
R"doc(Retrieve a size_t value. Since the underlying storage has type
int64_t, an exception is thrown if the value is negative.)doc";

static const char *__doc_mitsuba_Properties_size_2 =
R"doc(Retrieve a long value (use default value if no entry exists). Since
the underlying storage has type int64_t an exception is thrown if the
value is negative).)doc";

static const char *__doc_mitsuba_Properties_spectrum = R"doc(Retrieve a continuous spectrum)doc";

static const char *__doc_mitsuba_Properties_spectrum_2 =
R"doc(Retrieve a continuous spectrum (use the provided spectrum if no entry
exists))doc";

static const char *__doc_mitsuba_Properties_spectrum_3 =
R"doc(Retrieve a continuous spectrum (use default flat spectrum if no entry
exists))doc";

static const char *__doc_mitsuba_Properties_string = R"doc(Retrieve a string value)doc";

static const char *__doc_mitsuba_Properties_string_2 = R"doc(Retrieve a string value (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_transform = R"doc(Retrieve a 4x4 homogeneous coordinate transformation)doc";

static const char *__doc_mitsuba_Properties_transform_2 =
R"doc(Retrieve a 4x4 homogeneous coordinate transformation (use default
value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_type =
R"doc(Returns the type of an existing property. If no property exists under
that name, an error is logged and type ``void`` is returned.)doc";

static const char *__doc_mitsuba_Properties_unqueried = R"doc(Return the list of un-queried attributed)doc";

static const char *__doc_mitsuba_Properties_vector3f = R"doc(Retrieve a 3D vector)doc";

static const char *__doc_mitsuba_Properties_vector3f_2 = R"doc(Retrieve a 3D vector (use default value if no entry exists))doc";

static const char *__doc_mitsuba_Properties_was_queried = R"doc(Check if a certain property was queried)doc";

static const char *__doc_mitsuba_RadianceSample = R"doc(Radiance query record data structure used by SamplingIntegrator)doc";

static const char *__doc_mitsuba_RadianceSample_RadianceSample = R"doc(Construct a radiance query record for the given scene and sampler)doc";

static const char *__doc_mitsuba_RadianceSample_RadianceSample_2 = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_RadianceSample_3 = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_RadianceSample_4 = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_RadianceSample_5 = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_alpha = R"doc(Opacity value of the associated pixel)doc";

static const char *__doc_mitsuba_RadianceSample_next_1d = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_next_2d = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_RadianceSample_ray_intersect =
R"doc(Search for a ray intersection

This function does several things at once: if the intersection has
already been provided, it returns.

Otherwise, it 1. performs the ray intersection 2. computes the
transmittance due to participating media and stores it in
``transmittance``. 3. sets the alpha value

Returns:
    ``True`` if there is a valid intersection.)doc";

static const char *__doc_mitsuba_RadianceSample_sampler = R"doc(Sample generator)doc";

static const char *__doc_mitsuba_RadianceSample_scene = R"doc(Pointer to the associated scene)doc";

static const char *__doc_mitsuba_RadianceSample_si = R"doc(Surface interaction data structure)doc";

static const char *__doc_mitsuba_RadicalInverse =
R"doc(Efficient implementation of a radical inverse function with prime
bases including scrambled versions.

This class is used to implement Halton and Hammersley sequences for
QMC integration in Mitsuba.)doc";

static const char *__doc_mitsuba_RadicalInverse_PrimeBase = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_PrimeBase_divisor = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_PrimeBase_recip = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_PrimeBase_unused = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_PrimeBase_value = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_RadicalInverse =
R"doc(Precompute data structures that are used to evaluate the radical
inverse and scrambled radical inverse function

Parameter ``max_base``:
    Sets the value of the largest prime number base. The default
    interval [2, 8161] contains exactly 1024 prime bases.

Parameter ``scramble``:
    Selects the desired permutation type, where ``-1`` denotes the
    Faure permutations; any other number causes a pseudorandom
    permutation to be built seeded by the value of ``scramble``.)doc";

static const char *__doc_mitsuba_RadicalInverse_base =
R"doc(Returns the n-th prime base used by the sequence

These prime numbers are used as bases in the radical inverse function
implementation.)doc";

static const char *__doc_mitsuba_RadicalInverse_bases =
R"doc(Return the number of prime bases for which precomputed tables are
available)doc";

static const char *__doc_mitsuba_RadicalInverse_class = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_compute_faure_permutations =
R"doc(Compute the Faure permutations using dynamic programming

For reference, see "Good permutations for extreme discrepancy" by
Henri Faure, Journal of Number Theory, Vol. 42, 1, 1992.)doc";

static const char *__doc_mitsuba_RadicalInverse_eval =
R"doc(Calculate the radical inverse function

This function is used as a building block to construct Halton and
Hammersley sequences. Roughly, it computes a b-ary representation of
the input value ``index``, mirrors it along the decimal point, and
returns the resulting fractional value. The implementation here uses
prime numbers for ``b``.

Parameter ``base_index``:
    Selects the n-th prime that is used as a base when computing the
    radical inverse function (0 corresponds to 2, 1->3, 2->5, etc.).
    The value specified here must be between 0 and 1023.

Parameter ``index``:
    Denotes the index that should be mapped through the radical
    inverse function)doc";

static const char *__doc_mitsuba_RadicalInverse_eval_2 = R"doc(Vectorized implementation of eval())doc";

static const char *__doc_mitsuba_RadicalInverse_eval_scrambled =
R"doc(Calculate a scrambled radical inverse function

This function is used as a building block to construct permuted Halton
and Hammersley sequence variants. It works like the normal radical
inverse function eval(), except that every digit is run through an
extra scrambling permutation.)doc";

static const char *__doc_mitsuba_RadicalInverse_eval_scrambled_2 = R"doc(Vectorized implementation of eval_scrambled())doc";

static const char *__doc_mitsuba_RadicalInverse_inverse_permutation =
R"doc(Return the inverse permutation corresponding to the given prime number
basis)doc";

static const char *__doc_mitsuba_RadicalInverse_invert_permutation = R"doc(Invert one of the permutations)doc";

static const char *__doc_mitsuba_RadicalInverse_m_base = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_base_count = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_inv_permutation_storage = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_inv_permutations = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_permutation_storage = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_permutations = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_m_scramble = R"doc()doc";

static const char *__doc_mitsuba_RadicalInverse_permutation = R"doc(Return the permutation corresponding to the given prime number basis)doc";

static const char *__doc_mitsuba_RadicalInverse_scramble = R"doc(Return the original scramble value)doc";

static const char *__doc_mitsuba_RadicalInverse_to_string = R"doc(Return a human-readable string representation)doc";

static const char *__doc_mitsuba_Ray =
R"doc(Simple n-dimensional ray segment data structure

Along with the ray origin and direction, this data structure
additionally stores a ray segment [mint, maxt] (whose entries may
include positive/negative infinity), as well as the componentwise
reciprocals of the ray direction. That is just done for convenience,
as these values are frequently required.

Remark:
    Important: be careful when changing the ray direction. You must
    call update() to compute the componentwise reciprocals as well, or
    Mitsuba's ray-object intersection code may produce undefined
    results.)doc";

static const char *__doc_mitsuba_RayDifferential =
R"doc(Ray differential -- enhances the basic ray class with offset rays for
two adjacent pixels on the view plane)doc";

static const char *__doc_mitsuba_RayDifferential_RayDifferential = R"doc(Construct from a Ray instance)doc";

static const char *__doc_mitsuba_RayDifferential_RayDifferential_2 = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_RayDifferential_3 = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_RayDifferential_4 = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_RayDifferential_5 = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_d_x = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_d_y = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_has_differentials = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_o_x = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_o_y = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_operator_array = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_RayDifferential_scale_differential = R"doc()doc";

static const char *__doc_mitsuba_Ray_Ray = R"doc(Construct a new ray (o, d) at time 'time')doc";

static const char *__doc_mitsuba_Ray_Ray_2 = R"doc(Construct a new ray (o, d) with time)doc";

static const char *__doc_mitsuba_Ray_Ray_3 = R"doc(Construct a new ray (o, d) with bounds)doc";

static const char *__doc_mitsuba_Ray_Ray_4 = R"doc(Copy a ray, but change the [mint, maxt] interval)doc";

static const char *__doc_mitsuba_Ray_Ray_5 = R"doc()doc";

static const char *__doc_mitsuba_Ray_Ray_6 = R"doc()doc";

static const char *__doc_mitsuba_Ray_Ray_7 = R"doc()doc";

static const char *__doc_mitsuba_Ray_Ray_8 = R"doc()doc";

static const char *__doc_mitsuba_Ray_d = R"doc(< Ray direction)doc";

static const char *__doc_mitsuba_Ray_d_rcp = R"doc(< Componentwise reciprocals of the ray direction)doc";

static const char *__doc_mitsuba_Ray_maxt = R"doc(< Maximum position on the ray segment)doc";

static const char *__doc_mitsuba_Ray_mint = R"doc(< Minimum position on the ray segment)doc";

static const char *__doc_mitsuba_Ray_o = R"doc(< Ray origin)doc";

static const char *__doc_mitsuba_Ray_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Ray_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Ray_operator_call = R"doc(Return the position of a point along the ray)doc";

static const char *__doc_mitsuba_Ray_reverse = R"doc(Return a ray that points into the opposite direction)doc";

static const char *__doc_mitsuba_Ray_time = R"doc(< Time value associated with this ray)doc";

static const char *__doc_mitsuba_Ray_update = R"doc(Update the reciprocal ray directions after changing 'd')doc";

static const char *__doc_mitsuba_Ray_wavelengths = R"doc(< Wavelength packet associated with the ray)doc";

static const char *__doc_mitsuba_ReconstructionFilter =
R"doc(Generic interface to separable image reconstruction filters

When resampling bitmaps or adding samples to a rendering in progress,
Mitsuba first convolves them with a image reconstruction filter.
Various kinds are implemented as subclasses of this interface.

Because image filters are generally too expensive to evaluate for each
sample, the implementation of this class internally precomputes an
discrete representation, whose resolution given by
MTS_FILTER_RESOLUTION.)doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition =
R"doc(When resampling data to a different resolution using
Resampler::resample(), this enumeration specifies how lookups
*outside* of the input domain are handled.

See also:
    Resampler)doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition_EClamp = R"doc(Clamp to the outermost sample position (default))doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition_EMirror = R"doc(Assume that the input is mirrored along the boundary)doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition_EOne =
R"doc(Assume that the input function is equal to one outside of the defined
domain)doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition_ERepeat = R"doc(Assume that the input repeats in a periodic fashion)doc";

static const char *__doc_mitsuba_ReconstructionFilter_EBoundaryCondition_EZero = R"doc(Assume that the input function is zero outside of the defined domain)doc";

static const char *__doc_mitsuba_ReconstructionFilter_ReconstructionFilter = R"doc(Create a new reconstruction filter)doc";

static const char *__doc_mitsuba_ReconstructionFilter_border_size = R"doc(Return the block border size required when rendering with this filter)doc";

static const char *__doc_mitsuba_ReconstructionFilter_class = R"doc()doc";

static const char *__doc_mitsuba_ReconstructionFilter_eval = R"doc(Evaluate the filter function)doc";

static const char *__doc_mitsuba_ReconstructionFilter_eval_discretized = R"doc(Perform a lookup into the discretized version)doc";

static const char *__doc_mitsuba_ReconstructionFilter_init_discretization = R"doc(Mandatory initialization prior to calls to eval_discretized())doc";

static const char *__doc_mitsuba_ReconstructionFilter_m_border_size = R"doc()doc";

static const char *__doc_mitsuba_ReconstructionFilter_m_radius = R"doc()doc";

static const char *__doc_mitsuba_ReconstructionFilter_m_scale_factor = R"doc()doc";

static const char *__doc_mitsuba_ReconstructionFilter_m_values = R"doc()doc";

static const char *__doc_mitsuba_ReconstructionFilter_radius = R"doc(Return the filter's width)doc";

static const char *__doc_mitsuba_Resampler =
R"doc(Utility class for efficiently resampling discrete datasets to
different resolutions

Template parameter ``Scalar``:
    Denotes the underlying floating point data type (i.e. ``half``,
    ``float``, or ``double``))doc";

static const char *__doc_mitsuba_Resampler_Resampler =
R"doc(Create a new Resampler object that transforms between the specified
resolutions

This constructor precomputes all information needed to efficiently
perform the desired resampling operation. For that reason, it is most
efficient if it can be used over and over again (e.g. to resample the
equal-sized rows of a bitmap)

Parameter ``source_res``:
    Source resolution

Parameter ``target_res``:
    Desired target resolution)doc";

static const char *__doc_mitsuba_Resampler_boundary_condition =
R"doc(Return the boundary condition that should be used when looking up
samples outside of the defined input domain)doc";

static const char *__doc_mitsuba_Resampler_clamp =
R"doc(Returns the range to which resampled values will be clamped

The default is -infinity to infinity (i.e. no clamping is used))doc";

static const char *__doc_mitsuba_Resampler_lookup = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_bc = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_clamp = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_fast_end = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_fast_start = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_source_res = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_start = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_taps = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_target_res = R"doc()doc";

static const char *__doc_mitsuba_Resampler_m_weights = R"doc()doc";

static const char *__doc_mitsuba_Resampler_resample =
R"doc(Resample a multi-channel array and clamp the results to a specified
valid range

Parameter ``source``:
    Source array of samples

Parameter ``target``:
    Target array of samples

Parameter ``source_stride``:
    Stride of samples in the source array. A value of '1' implies that
    they are densely packed.

Parameter ``target_stride``:
    Stride of samples in the source array. A value of '1' implies that
    they are densely packed.

Parameter ``channels``:
    Number of channels to be resampled)doc";

static const char *__doc_mitsuba_Resampler_resample_internal = R"doc()doc";

static const char *__doc_mitsuba_Resampler_set_boundary_condition =
R"doc(Set the boundary condition that should be used when looking up samples
outside of the defined input domain

The default is EBoundaryCondition::EClamp)doc";

static const char *__doc_mitsuba_Resampler_set_clamp = R"doc(If specified, resampled values will be clamped to the given range)doc";

static const char *__doc_mitsuba_Resampler_source_resolution = R"doc(Return the reconstruction filter's source resolution)doc";

static const char *__doc_mitsuba_Resampler_taps = R"doc(Return the number of taps used by the reconstruction filter)doc";

static const char *__doc_mitsuba_Resampler_target_resolution = R"doc(Return the reconstruction filter's target resolution)doc";

static const char *__doc_mitsuba_Resampler_to_string = R"doc(Return a human-readable summary)doc";

static const char *__doc_mitsuba_Sampler = R"doc()doc";

static const char *__doc_mitsuba_Sampler_Sampler = R"doc()doc";

static const char *__doc_mitsuba_Sampler_class = R"doc()doc";

static const char *__doc_mitsuba_Sampler_clone =
R"doc(Create a clone of this sampler

The clone is allowed to be different to some extent, e.g. a
pseudorandom generator should be based on a different random seed
compared to the original. All other parameters are copied exactly.

May throw an exception if not supported. Cloning may also change the
state of the original sampler (e.g. by using the next 1D sample as a
seed for the clone).)doc";

static const char *__doc_mitsuba_Sampler_m_sample_count = R"doc()doc";

static const char *__doc_mitsuba_Sampler_next =
R"doc(Automatically selects the right variant of ``next_...`` based on the
desired return type.)doc";

static const char *__doc_mitsuba_Sampler_next_1d = R"doc(Retrieve the next component value from the current sample)doc";

static const char *__doc_mitsuba_Sampler_next_1d_2 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_1d())doc";

static const char *__doc_mitsuba_Sampler_next_1d_p = R"doc(Retrieve the next packet of values from the current sample)doc";

static const char *__doc_mitsuba_Sampler_next_2d = R"doc(Retrieve the next two component values from the current sample)doc";

static const char *__doc_mitsuba_Sampler_next_2d_2 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_2d())doc";

static const char *__doc_mitsuba_Sampler_next_2d_p = R"doc(Retrieve the next packet of 2D values from the current sample)doc";

static const char *__doc_mitsuba_Sampler_sample_count = R"doc(Return the number of samples per pixel)doc";

static const char *__doc_mitsuba_Sampler_seed = R"doc(Deterministically seed the underlying RNG, if any)doc";

static const char *__doc_mitsuba_SamplingIntegrator =
R"doc(Abstract base class, which describes integrators capable of computing
samples of the scene's radiance function.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_SamplingIntegrator = R"doc(//! @})doc";

static const char *__doc_mitsuba_SamplingIntegrator_cancel = R"doc()doc";

static const char *__doc_mitsuba_SamplingIntegrator_class = R"doc()doc";

static const char *__doc_mitsuba_SamplingIntegrator_eval =
R"doc(Sample the incident radiance along a ray. The record passed is used to
store additional information about the result.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_eval_2 = R"doc(Vectorized variant of eval.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_eval_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
eval())doc";

static const char *__doc_mitsuba_SamplingIntegrator_m_block_size = R"doc(Size of (square) image blocks to render per core.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_m_render_timer = R"doc(Timer used to enforce the timeout.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_m_samples_per_pass =
R"doc(Number of samples to compute for each pass over the image blocks. Must
be a multiple of the total sample count per pixel. If set to (size_t)
-1, all the work is done in a single pass (default).)doc";

static const char *__doc_mitsuba_SamplingIntegrator_m_stop = R"doc(Integrators should stop computing when this flag is set to true.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_m_timeout =
R"doc(Maximum amount of time to spend rendering (excluding scene parsing).
Specified in seconds. A negative values indicates no timeout.)doc";

static const char *__doc_mitsuba_SamplingIntegrator_render = R"doc(//! @{ \name Integrator interface implementation)doc";

static const char *__doc_mitsuba_SamplingIntegrator_render_block_scalar = R"doc()doc";

static const char *__doc_mitsuba_SamplingIntegrator_render_block_vector = R"doc()doc";

static const char *__doc_mitsuba_SamplingIntegrator_should_stop =
R"doc(Indicates whether cancel() or a timeout have occured. Should be
checked often in each integrator's main loop so that timeout is
enforced accurately.

Note that accurate timeouts rely on m_render_timer, which needs to be
reset at the beginning of the rendering phase.)doc";

static const char *__doc_mitsuba_Scene = R"doc()doc";

static const char *__doc_mitsuba_Scene_Scene = R"doc()doc";

static const char *__doc_mitsuba_Scene_class = R"doc()doc";

static const char *__doc_mitsuba_Scene_emitters = R"doc(Return the list of emitters)doc";

static const char *__doc_mitsuba_Scene_emitters_2 = R"doc(Return the list of emitters)doc";

static const char *__doc_mitsuba_Scene_environment = R"doc(Return the environment emitter (if any))doc";

static const char *__doc_mitsuba_Scene_film = R"doc(Return the current sensor's film)doc";

static const char *__doc_mitsuba_Scene_film_2 = R"doc(Return the current sensor's film)doc";

static const char *__doc_mitsuba_Scene_integrator = R"doc(Return the scene's integrator)doc";

static const char *__doc_mitsuba_Scene_integrator_2 = R"doc(Return the scene's integrator)doc";

static const char *__doc_mitsuba_Scene_kdtree = R"doc(Return the scene's KD-tree)doc";

static const char *__doc_mitsuba_Scene_kdtree_2 = R"doc(Return the scene's KD-tree)doc";

static const char *__doc_mitsuba_Scene_m_emitter_distr = R"doc(Precomputed distribution of emitters' intensity.)doc";

static const char *__doc_mitsuba_Scene_m_emitters = R"doc()doc";

static const char *__doc_mitsuba_Scene_m_environment = R"doc()doc";

static const char *__doc_mitsuba_Scene_m_integrator = R"doc()doc";

static const char *__doc_mitsuba_Scene_m_kdtree = R"doc()doc";

static const char *__doc_mitsuba_Scene_m_monochrome = R"doc(Whether monochrome mode is enabled.)doc";

static const char *__doc_mitsuba_Scene_m_sampler = R"doc()doc";

static const char *__doc_mitsuba_Scene_m_sensors = R"doc()doc";

static const char *__doc_mitsuba_Scene_pdf_emitter_direction =
R"doc(Evaluate the probability density of the sample_emitter_direct()
technique given an filled-in DirectionSample record.

Parameter ``ref``:
    A reference point somewhere within the scene

Parameter ``ds``:
    A direction sampling record, which specifies the query location.

Returns:
    The solid angle density expressed of the sample)doc";

static const char *__doc_mitsuba_Scene_pdf_emitter_direction_2 = R"doc(Vectorized version of pdf_emitter_direction)doc";

static const char *__doc_mitsuba_Scene_pdf_emitter_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
pdf_emitter_direction())doc";

static const char *__doc_mitsuba_Scene_pdf_emitter_direction_impl = R"doc()doc";

static const char *__doc_mitsuba_Scene_ray_intersect =
R"doc(Intersect a ray against all primitives stored in the scene and return
information about the resulting surface interaction

Parameter ``ray``:
    A 3-dimensional ray data structure with minimum/maximum extent
    information, as well as a time value (which matters when the
    shapes are in motion)

Returns:
    A detailed surface interaction record. Query its ``is_valid()``
    method to determine whether an intersection was actually found.)doc";

static const char *__doc_mitsuba_Scene_ray_intersect_2 = R"doc(Vectorized version of ray_intersect)doc";

static const char *__doc_mitsuba_Scene_ray_intersect_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_intersect())doc";

static const char *__doc_mitsuba_Scene_ray_intersect_naive =
R"doc(Ray intersection using the naive (brute force) method. Exposed for
testing purposes.)doc";

static const char *__doc_mitsuba_Scene_ray_intersect_naive_2 = R"doc(Vectorized version of ray_intersect_naive)doc";

static const char *__doc_mitsuba_Scene_ray_intersect_naive_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_intersect_naive())doc";

static const char *__doc_mitsuba_Scene_ray_test =
R"doc(Intersect a ray against all primitives stored in the scene and *only*
determine whether or not there is an intersection.

Testing for the mere presence of intersections (as in ray_intersect)
is considerably faster than finding an actual intersection, hence this
function should be preferred when detailed information is not needed.

Parameter ``ray``:
    A 3-dimensional ray data structure with minimum/maximum extent
    information, as well as a time value (which matterns when the
    shapes are in motion)

Returns:
    ``True`` if an intersection was found)doc";

static const char *__doc_mitsuba_Scene_ray_test_2 = R"doc(Vectorized version of ray_test)doc";

static const char *__doc_mitsuba_Scene_ray_test_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_test())doc";

static const char *__doc_mitsuba_Scene_sample_emitter_direction =
R"doc(Direct illumination sampling routine

Given an arbitrary reference point in the scene, this method samples a
direction from the reference point to towards an emitter.

Ideally, the implementation should importance sample the product of
the emission profile and the geometry term between the reference point
and the position on the emitter.

Parameter ``ref``:
    A reference point somewhere within the scene

Parameter ``sample``:
    A uniformly distributed 2D vector

Parameter ``test_visibility``:
    When set to ``True``, a shadow ray will be cast to ensure that the
    sampled emitter position and the reference point are mutually
    visible.

Returns:
    Radiance received along the sampled ray divided by the sample
    probability.)doc";

static const char *__doc_mitsuba_Scene_sample_emitter_direction_2 = R"doc(Vectorized variant of sample_emitter_direction)doc";

static const char *__doc_mitsuba_Scene_sample_emitter_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_emitter_direction())doc";

static const char *__doc_mitsuba_Scene_sample_emitter_direction_impl = R"doc()doc";

static const char *__doc_mitsuba_Scene_sampler = R"doc(Return the scene's sampler)doc";

static const char *__doc_mitsuba_Scene_sampler_2 = R"doc(Return the scene's sampler)doc";

static const char *__doc_mitsuba_Scene_sensor = R"doc(Return the current sensor)doc";

static const char *__doc_mitsuba_Scene_sensor_2 = R"doc(Return the current sensor)doc";

static const char *__doc_mitsuba_Scene_sensors = R"doc(Return the list of sensors)doc";

static const char *__doc_mitsuba_Scene_sensors_2 = R"doc(Return the list of sensors)doc";

static const char *__doc_mitsuba_Scene_to_string = R"doc(Return a human-readable string representation of the scene contents.)doc";

static const char *__doc_mitsuba_ScopedPhase = R"doc()doc";

static const char *__doc_mitsuba_ScopedPhase_ScopedPhase = R"doc()doc";

static const char *__doc_mitsuba_ScopedPhase_ScopedPhase_2 = R"doc()doc";

static const char *__doc_mitsuba_ScopedPhase_m_flag = R"doc()doc";

static const char *__doc_mitsuba_ScopedPhase_m_target = R"doc()doc";

static const char *__doc_mitsuba_ScopedPhase_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment =
R"doc(RAII-style class to temporarily switch to another thread's logger/file
resolver)doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_ScopedSetThreadEnvironment = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_ScopedSetThreadEnvironment_2 = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_m_file_resolver = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_m_logger = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_m_profiler_flags = R"doc()doc";

static const char *__doc_mitsuba_ScopedSetThreadEnvironment_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Sensor = R"doc()doc";

static const char *__doc_mitsuba_Sensor_Sensor = R"doc(//! @})doc";

static const char *__doc_mitsuba_Sensor_class = R"doc()doc";

static const char *__doc_mitsuba_Sensor_film = R"doc(Return the Film instance associated with this sensor)doc";

static const char *__doc_mitsuba_Sensor_film_2 = R"doc(Return the Film instance associated with this sensor (const))doc";

static const char *__doc_mitsuba_Sensor_m_aspect = R"doc()doc";

static const char *__doc_mitsuba_Sensor_m_film = R"doc()doc";

static const char *__doc_mitsuba_Sensor_m_resolution = R"doc()doc";

static const char *__doc_mitsuba_Sensor_m_sampler = R"doc()doc";

static const char *__doc_mitsuba_Sensor_m_shutter_open = R"doc()doc";

static const char *__doc_mitsuba_Sensor_m_shutter_open_time = R"doc()doc";

static const char *__doc_mitsuba_Sensor_needs_aperture_sample =
R"doc(Does the sampling technique require a sample for the aperture
position?)doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential =
R"doc(Importance sample a ray differential proportional to the sensor's
sensitivity profile.

The sensor profile is a six-dimensional quantity that depends on time,
wavelength, surface position, and direction. This function takes a
given time value and five uniformly distributed samples on the
interval [0, 1] and warps them so that the returned ray the profile.
Any discrepancies between ideal and actual sampled profile are
absorbed into a spectral importance weight that is returned along with
the ray.

In contrast to Endpoint::sample_ray(), this function returns
differentials with respect to the X and Y axis in screen space.

Parameter ``time``:
    The scene time associated with the ray_differential to be sampled

Parameter ``sample1``:
    A uniformly distributed 1D value that is used to sample the
    spectral dimension of the sensitivity profile.

Parameter ``sample2``:
    This argument corresponds to the sample position in fractional
    pixel coordinates relative to the crop window of the underlying
    film.

Parameter ``sample3``:
    A uniformly distributed sample on the domain ``[0,1]^2``. This
    argument determines the position on the aperture of the sensor.
    This argument is ignored if ``needs_sample_3() == false``.

Returns:
    The sampled ray differential and (potentially spectrally varying)
    importance weights. The latter account for the difference between
    the sensor profile and the actual used sampling density function.)doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_2 = R"doc(Vectorized version of sample_ray_differential)doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_ray_differential())doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_impl = R"doc()doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_pol =
R"doc(Polarized version of sample_ray()

Since there is no special polarized importance sampling this method
behaves very similar to the standard one.

Returns:
    The sampled ray differential and the Mueller matrix of importance
    weights (in standard world space for the sensor profile).)doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_pol_2 = R"doc(Vectorized version of sample_ray_differential_pol())doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_pol_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_ray_differential_pos())doc";

static const char *__doc_mitsuba_Sensor_sample_ray_differential_pol_impl = R"doc()doc";

static const char *__doc_mitsuba_Sensor_sampler =
R"doc(Return the sensor's sample generator

This is the *root* sampler, which will later be cloned a number of
times to provide each participating worker thread with its own
instance (see Scene::sampler()). Therefore, this sampler should never
be used for anything except creating clones.)doc";

static const char *__doc_mitsuba_Sensor_sampler_2 =
R"doc(Return the sensor's sampler (const version).

This is the *root* sampler, which will later be cloned a number of
times to provide each participating worker thread with its own
instance (see Scene::sampler()). Therefore, this sampler should never
be used for anything except creating clones.)doc";

static const char *__doc_mitsuba_Sensor_shutter_open = R"doc(Return the time value of the shutter opening event)doc";

static const char *__doc_mitsuba_Sensor_shutter_open_time = R"doc(Return the length, for which the shutter remains open)doc";

static const char *__doc_mitsuba_Shape =
R"doc(Base class of all geometric shapes in Mitsuba

This class provides core functionality for sampling positions on
surfaces, computing ray intersections, and bounding shapes within ray
intersection acceleration data structures.)doc";

static const char *__doc_mitsuba_ShapeKDTree = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_ShapeKDTree = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_add_shape = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_bbox = R"doc(Return the bounding box of the i-th primitive)doc";

static const char *__doc_mitsuba_ShapeKDTree_bbox_2 = R"doc(Return the (clipped) bounding box of the i-th primitive)doc";

static const char *__doc_mitsuba_ShapeKDTree_build = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_class = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_create_surface_interaction =
R"doc(Create a SurfaceInteraction data structure by expanding the temporary
information collected during intersect_ray().)doc";

static const char *__doc_mitsuba_ShapeKDTree_find_shape =
R"doc(Map an abstract TShapeKDTree primitive index to a specific shape
managed by the ShapeKDTree.

The function returns the shape index and updates the *idx* parameter
to point to the primitive index (e.g. triangle ID) within the shape.)doc";

static const char *__doc_mitsuba_ShapeKDTree_intersect_prim =
R"doc(Check whether a primitive is intersected by the given ray.

Some temporary space is supplied to store data that can later be used
to create a detailed intersection record.)doc";

static const char *__doc_mitsuba_ShapeKDTree_m_primitive_map = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_m_shapes = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_primitive_count = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_ray_intersect = R"doc(Scalar ray tracing kernel)doc";

static const char *__doc_mitsuba_ShapeKDTree_ray_intersect_2 = R"doc(Vectorized ray tracing kernel)doc";

static const char *__doc_mitsuba_ShapeKDTree_ray_intersect_naive = R"doc(Brute force intersection routine for debugging purposes)doc";

static const char *__doc_mitsuba_ShapeKDTree_shape = R"doc(Return the i-th shape)doc";

static const char *__doc_mitsuba_ShapeKDTree_shape_2 = R"doc(Return the i-th shape)doc";

static const char *__doc_mitsuba_ShapeKDTree_shape_count = R"doc()doc";

static const char *__doc_mitsuba_ShapeKDTree_to_string = R"doc(Return a human-readable string representation of the scene contents.)doc";

static const char *__doc_mitsuba_Shape_Shape = R"doc(//! @})doc";

static const char *__doc_mitsuba_Shape_Shape_2 = R"doc()doc";

static const char *__doc_mitsuba_Shape_bbox =
R"doc(Return an axis aligned box that bounds all shape primitives (including
any transformations that may have been applied to them))doc";

static const char *__doc_mitsuba_Shape_bbox_2 =
R"doc(Return an axis aligned box that bounds a single shape primitive
(including any transformations that may have been applied to it)

Remark:
    The default implementation simply calls bbox())doc";

static const char *__doc_mitsuba_Shape_bbox_3 =
R"doc(Return an axis aligned box that bounds a single shape primitive after
it has been clipped to another bounding box.

This is extremely important to construct high-quality kd-trees. The
default implementation just takes the bounding box returned by
bbox(Index index) and clips it to *clip*.)doc";

static const char *__doc_mitsuba_Shape_bsdf = R"doc(Return the shape's BSDF)doc";

static const char *__doc_mitsuba_Shape_class = R"doc()doc";

static const char *__doc_mitsuba_Shape_effective_primitive_count =
R"doc(Return the number of primitives (triangles, hairs, ..) contributed to
the scene by this shape

Includes instanced geometry. The default implementation simply returns
the same value as primitive_count().)doc";

static const char *__doc_mitsuba_Shape_emitter = R"doc(Return the area emitter associated with this shape (if any))doc";

static const char *__doc_mitsuba_Shape_emitter_2 = R"doc(Return the area emitter associated with this shape (if any))doc";

static const char *__doc_mitsuba_Shape_exterior_medium = R"doc(Return the medium that lies on the exterior of this shape)doc";

static const char *__doc_mitsuba_Shape_fill_surface_interaction =
R"doc(Given a surface intersection found by ray_intersect(), fill a
SurfaceInteraction data structure with detailed information describing
the intersection.

The implementation should fill in the fields ``p``, ``uv``, ``n``,
``sh_frame``.n, ``dp_du``, and ``dp_dv``. The fields ``t``, ``time``,
``wavelengths``, ``shape``, ``prim_index``, ``instance``, and
``has_uv_partials`` will already have been initialized by the caller.
The field ``wi`` is initialized by the caller following the call to
fill_surface_interaction(), and ``duv_dx``, and ``duv_dy`` are left
uninitialized.)doc";

static const char *__doc_mitsuba_Shape_fill_surface_interaction_2 = R"doc(Vectorized version of fill_surface_interaction())doc";

static const char *__doc_mitsuba_Shape_fill_surface_interaction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
fill_surface_interaction())doc";

static const char *__doc_mitsuba_Shape_interior_medium = R"doc(Return the medium that lies on the interior of this shape)doc";

static const char *__doc_mitsuba_Shape_is_emitter = R"doc(Is this shape also an area emitter?)doc";

static const char *__doc_mitsuba_Shape_is_medium_transition = R"doc(Does the surface of this shape mark a medium transition?)doc";

static const char *__doc_mitsuba_Shape_is_mesh = R"doc(Is this shape a triangle mesh?)doc";

static const char *__doc_mitsuba_Shape_is_sensor = R"doc(Is this shape also an area sensor?)doc";

static const char *__doc_mitsuba_Shape_m_bsdf = R"doc()doc";

static const char *__doc_mitsuba_Shape_m_emitter = R"doc()doc";

static const char *__doc_mitsuba_Shape_m_exterior_medium = R"doc()doc";

static const char *__doc_mitsuba_Shape_m_interior_medium = R"doc()doc";

static const char *__doc_mitsuba_Shape_m_mesh = R"doc()doc";

static const char *__doc_mitsuba_Shape_m_sensor = R"doc()doc";

static const char *__doc_mitsuba_Shape_normal_derivative =
R"doc(Return the derivative of the normal vector with respect to the UV
parameterization

This can be used to compute Gaussian and principal curvatures, amongst
other things.

Parameter ``si``:
    Surface interaction associated with the query

Parameter ``shading_frame``:
    Specifies whether to compute the derivative of the geometric
    normal *or* the shading normal of the surface

Returns:
    The partial derivatives of the normal vector with respect to ``u``
    and ``v``.)doc";

static const char *__doc_mitsuba_Shape_normal_derivative_2 = R"doc(Vectorized version of normal_derivative())doc";

static const char *__doc_mitsuba_Shape_normal_derivative_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
normal_derivative())doc";

static const char *__doc_mitsuba_Shape_pdf_direction =
R"doc(Query the probability density of sample_direction()

Parameter ``it``:
    A reference position somewhere within the scene.

Parameter ``ps``:
    A position record describing the sample in question

Returns:
    The probability density per unit solid angle)doc";

static const char *__doc_mitsuba_Shape_pdf_direction_2 = R"doc(Vectorized version of pdf_direction.)doc";

static const char *__doc_mitsuba_Shape_pdf_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
pdf_direction())doc";

static const char *__doc_mitsuba_Shape_pdf_direction_fallback = R"doc()doc";

static const char *__doc_mitsuba_Shape_pdf_position =
R"doc(Query the probability density of sample_position() for a particular
point on the surface.

Parameter ``ps``:
    A position record describing the sample in question

Returns:
    The probability density per unit area)doc";

static const char *__doc_mitsuba_Shape_pdf_position_2 = R"doc(Vectorized version of pdf_position.)doc";

static const char *__doc_mitsuba_Shape_pdf_position_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
pdf_position())doc";

static const char *__doc_mitsuba_Shape_primitive_count =
R"doc(Returns the number of sub-primitives that make up this shape

Remark:
    The default implementation simply returns ``1``)doc";

static const char *__doc_mitsuba_Shape_ray_intersect =
R"doc(Fast ray intersection test

Efficiently test whether the shape is intersected by the given ray,
and cache preliminary information about the intersection if that is
the case.

If the intersection is deemed relevant (e.g. the closest to the ray
origin), detailed intersection information can later be obtained via
the create_surface_interaction() method.

Parameter ``ray``:
    The ray to be tested for an intersection

Parameter ``cache``:
    Temporary space (``(MTS_KD_INTERSECTION_CACHE_SIZE-2) *
    sizeof(Float[P])`` bytes) that must be supplied to cache
    information about the intersection.)doc";

static const char *__doc_mitsuba_Shape_ray_intersect_2 = R"doc(Vectorized variant of ray_intersect.)doc";

static const char *__doc_mitsuba_Shape_ray_intersect_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_intersect())doc";

static const char *__doc_mitsuba_Shape_ray_intersect_4 =
R"doc(Test for an intersection and return detailed information

This operation combines the prior ray_intersect() and
fill_surface_interaction() operations in case intersection with a
single shape is desired.

Parameter ``ray``:
    The ray to be tested for an intersection)doc";

static const char *__doc_mitsuba_Shape_ray_intersect_5 = R"doc(Vectorized version of ray_intersect())doc";

static const char *__doc_mitsuba_Shape_ray_intersect_6 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_intersect)doc";

static const char *__doc_mitsuba_Shape_ray_test =
R"doc(Fast ray shadow test

Efficiently test whether the shape is intersected by the given ray,
and cache preliminary information about the intersection if that is
the case.

No details about the intersection are returned, hence the function is
only useful for visibility queries. For most shapes, the
implementation will simply forward the call to ray_intersect(). When
the shape actually contains a nested kd-tree, some optimizations are
possible.

Parameter ``ray``:
    The ray to be tested for an intersection)doc";

static const char *__doc_mitsuba_Shape_ray_test_2 = R"doc(Vectorized variant of ray_test.)doc";

static const char *__doc_mitsuba_Shape_ray_test_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
ray_test())doc";

static const char *__doc_mitsuba_Shape_sample_direction =
R"doc(Sample a direction towards this shape with respect to solid angles
measured at a reference position within the scene

An ideal implementation of this interface would achieve a uniform
solid angle density within the surface region that is visible from the
reference position ``it.p`` (though such an ideal implementation is
usually neither feasible nor advisable due to poor efficiency).

The function returns the sampled position and the inverse probability
per unit solid angle associated with the sample.

When the Shape subclass does not supply a custom implementation of
this function, the Shape class reverts to a fallback approach that
piggybacks on sample_position(). This will generally lead to a
suboptimal sample placement and higher variance in Monte Carlo
estimators using the samples.

Parameter ``it``:
    A reference position somewhere within the scene.

Parameter ``sample``:
    A uniformly distributed 2D point on the domain ``[0,1]^2``

Returns:
    A DirectionSample instance describing the generated sample)doc";

static const char *__doc_mitsuba_Shape_sample_direction_2 = R"doc(Vectorized version of sample_direction.)doc";

static const char *__doc_mitsuba_Shape_sample_direction_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_direction())doc";

static const char *__doc_mitsuba_Shape_sample_direction_fallback = R"doc()doc";

static const char *__doc_mitsuba_Shape_sample_position =
R"doc(Sample a point on the surface of this shape

The sampling strategy is ideally uniform over the surface, though
implementations are allowed to deviate from a perfectly uniform
distribution as long as this is reflected in the returned probability
density.

Parameter ``time``:
    The scene time associated with the position sample

Parameter ``sample``:
    A uniformly distributed 2D point on the domain ``[0,1]^2``

Returns:
    A PositionSample instance describing the generated sample)doc";

static const char *__doc_mitsuba_Shape_sample_position_2 = R"doc(Vectorized version of sample_position.)doc";

static const char *__doc_mitsuba_Shape_sample_position_3 =
R"doc(Compatibility wrapper, which strips the mask argument and invokes
sample_position())doc";

static const char *__doc_mitsuba_Shape_sensor = R"doc(Return the area sensor associated with this shape (if any))doc";

static const char *__doc_mitsuba_Shape_surface_area =
R"doc(Return the shape's surface area.

The function assumes that the object is not undergoing some kind of
time-dependent scaling.

The default implementation throws an exception.)doc";

static const char *__doc_mitsuba_Spectrum = R"doc(//! @{ \name Data types for discretized spectral data)doc";

static const char *__doc_mitsuba_Spectrum_Spectrum = R"doc()doc";

static const char *__doc_mitsuba_Spectrum_Spectrum_2 = R"doc()doc";

static const char *__doc_mitsuba_Spectrum_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Spectrum_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Spiral =
R"doc(Generates a spiral of blocks to be rendered.

Author:
    Adam Arbree Aug 25, 2005 RayTracer.java Used with permission.
    Copyright 2005 Program of Computer Graphics, Cornell University)doc";

static const char *__doc_mitsuba_Spiral_EDirection = R"doc()doc";

static const char *__doc_mitsuba_Spiral_EDirection_EDown = R"doc()doc";

static const char *__doc_mitsuba_Spiral_EDirection_ELeft = R"doc()doc";

static const char *__doc_mitsuba_Spiral_EDirection_ERight = R"doc()doc";

static const char *__doc_mitsuba_Spiral_EDirection_EUp = R"doc()doc";

static const char *__doc_mitsuba_Spiral_Spiral = R"doc(Create a new spiral generator for the given film and block size)doc";

static const char *__doc_mitsuba_Spiral_block_count = R"doc(Return the total number of blocks)doc";

static const char *__doc_mitsuba_Spiral_class = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_block_count = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_block_counter = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_block_size = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_blocks = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_current_direction = R"doc(Direction where the spiral is currently headed.)doc";

static const char *__doc_mitsuba_Spiral_m_mutex = R"doc(Protects the spiral's state (thread safety).)doc";

static const char *__doc_mitsuba_Spiral_m_offset = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_position = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_remaining_passes = R"doc(Number of times the spiral should automatically restart.)doc";

static const char *__doc_mitsuba_Spiral_m_size = R"doc()doc";

static const char *__doc_mitsuba_Spiral_m_steps = R"doc(Step counters.)doc";

static const char *__doc_mitsuba_Spiral_m_steps_left = R"doc(Step counters.)doc";

static const char *__doc_mitsuba_Spiral_max_block_size = R"doc(Return the maximum block size)doc";

static const char *__doc_mitsuba_Spiral_next_block =
R"doc(Return the offset and size of the next block.

A size of zero indicates that the spiral traversal is done.)doc";

static const char *__doc_mitsuba_Spiral_reset = R"doc(Reset the spiral to its initial state)doc";

static const char *__doc_mitsuba_Spiral_set_passes = R"doc(Sets the number of time the spiral should automatically reset.)doc";

static const char *__doc_mitsuba_Stream =
R"doc(Abstract seekable stream class

Specifies all functions to be implemented by stream subclasses and
provides various convenience functions layered on top of on them.

All read**X**() and write**X**() methods support transparent
conversion based on the endianness of the underlying system and the
value passed to set_byte_order(). Whenever host_byte_order() and
byte_order() disagree, the endianness is swapped.

See also:
    FileStream, MemoryStream, DummyStream)doc";

static const char *__doc_mitsuba_StreamAppender =
R"doc(%Appender implementation, which writes to an arbitrary C++ output
stream)doc";

static const char *__doc_mitsuba_StreamAppender_StreamAppender =
R"doc(Create a new stream appender

Remark:
    This constructor is not exposed in the Python bindings)doc";

static const char *__doc_mitsuba_StreamAppender_StreamAppender_2 = R"doc(Create a new stream appender logging to a file)doc";

static const char *__doc_mitsuba_StreamAppender_append = R"doc(Append a line of text)doc";

static const char *__doc_mitsuba_StreamAppender_class = R"doc()doc";

static const char *__doc_mitsuba_StreamAppender_log_progress = R"doc(Process a progress message)doc";

static const char *__doc_mitsuba_StreamAppender_logs_to_file = R"doc(Does this appender log to a file)doc";

static const char *__doc_mitsuba_StreamAppender_m_fileName = R"doc()doc";

static const char *__doc_mitsuba_StreamAppender_m_is_file = R"doc()doc";

static const char *__doc_mitsuba_StreamAppender_m_last_message_was_progress = R"doc()doc";

static const char *__doc_mitsuba_StreamAppender_m_stream = R"doc()doc";

static const char *__doc_mitsuba_StreamAppender_read_log = R"doc(Return the contents of the log file as a string)doc";

static const char *__doc_mitsuba_StreamAppender_to_string = R"doc(Return a string representation)doc";

static const char *__doc_mitsuba_Stream_EByteOrder = R"doc(Defines the byte order (endianness) to use in this Stream)doc";

static const char *__doc_mitsuba_Stream_EByteOrder_EBigEndian = R"doc(< PowerPC, SPARC, Motorola 68K)doc";

static const char *__doc_mitsuba_Stream_EByteOrder_ELittleEndian = R"doc(< x86, x86_64)doc";

static const char *__doc_mitsuba_Stream_EByteOrder_ENetworkByteOrder = R"doc(< Network byte order (an alias for big endian))doc";

static const char *__doc_mitsuba_Stream_Stream =
R"doc(Creates a new stream.

By default, this function sets the stream byte order to that of the
system (i.e. no conversion is performed))doc";

static const char *__doc_mitsuba_Stream_Stream_2 = R"doc(Copying is disallowed.)doc";

static const char *__doc_mitsuba_Stream_byte_order = R"doc(Returns the byte order of this stream.)doc";

static const char *__doc_mitsuba_Stream_can_read = R"doc(Can we read from the stream?)doc";

static const char *__doc_mitsuba_Stream_can_write = R"doc(Can we write to the stream?)doc";

static const char *__doc_mitsuba_Stream_class = R"doc()doc";

static const char *__doc_mitsuba_Stream_close =
R"doc(Closes the stream.

No further read or write operations are permitted.

This function is idempotent. It may be called automatically by the
destructor.)doc";

static const char *__doc_mitsuba_Stream_flush = R"doc(Flushes the stream's buffers, if any)doc";

static const char *__doc_mitsuba_Stream_host_byte_order = R"doc(Returns the byte order of the underlying machine.)doc";

static const char *__doc_mitsuba_Stream_is_closed = R"doc(Whether the stream is closed (no read or write are then permitted).)doc";

static const char *__doc_mitsuba_Stream_m_byte_order = R"doc()doc";

static const char *__doc_mitsuba_Stream_needs_endianness_swap =
R"doc(Returns true if we need to perform endianness swapping before writing
or reading.)doc";

static const char *__doc_mitsuba_Stream_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Stream_read =
R"doc(Reads a specified amount of data from the stream. \note This does
**not** handle endianness swapping.

Throws an exception when the stream ended prematurely. Implementations
need to handle endianness swap when appropriate.)doc";

static const char *__doc_mitsuba_Stream_read_2 =
R"doc(Reads one object of type T from the stream at the current position by
delegating to the appropriate ``serialization_helper``.

Endianness swapping is handled automatically if needed.)doc";

static const char *__doc_mitsuba_Stream_read_array =
R"doc(Reads multiple objects of type T from the stream at the current
position by delegating to the appropriate ``serialization_helper``.

Endianness swapping is handled automatically if needed.)doc";

static const char *__doc_mitsuba_Stream_read_line = R"doc(Convenience function for reading a line of text from an ASCII file)doc";

static const char *__doc_mitsuba_Stream_read_token = R"doc(Convenience function for reading a contiguous token from an ASCII file)doc";

static const char *__doc_mitsuba_Stream_seek =
R"doc(Seeks to a position inside the stream.

Seeking beyond the size of the buffer will not modify the length of
its contents. However, a subsequent write should start at the seeked
position and update the size appropriately.)doc";

static const char *__doc_mitsuba_Stream_set_byte_order =
R"doc(Sets the byte order to use in this stream.

Automatic conversion will be performed on read and write operations to
match the system's native endianness.

No consistency is guaranteed if this method is called after performing
some read and write operations on the system using a different
endianness.)doc";

static const char *__doc_mitsuba_Stream_size = R"doc(Returns the size of the stream)doc";

static const char *__doc_mitsuba_Stream_skip = R"doc(Skip ahead by a given number of bytes)doc";

static const char *__doc_mitsuba_Stream_tell = R"doc(Gets the current position inside the stream)doc";

static const char *__doc_mitsuba_Stream_to_string = R"doc(Returns a human-readable desriptor of the stream)doc";

static const char *__doc_mitsuba_Stream_truncate =
R"doc(Truncates the stream to a given size.

The position is updated to ``min(old_position, size)``. Throws an
exception if in read-only mode.)doc";

static const char *__doc_mitsuba_Stream_write =
R"doc(Writes a specified amount of data into the stream. \note This does
**not** handle endianness swapping.

Throws an exception when not all data could be written.
Implementations need to handle endianness swap when appropriate.)doc";

static const char *__doc_mitsuba_Stream_write_2 =
R"doc(Reads one object of type T from the stream at the current position by
delegating to the appropriate ``serialization_helper``.

Endianness swapping is handled automatically if needed.)doc";

static const char *__doc_mitsuba_Stream_write_array =
R"doc(Reads multiple objects of type T from the stream at the current
position by delegating to the appropriate ``serialization_helper``.

Endianness swapping is handled automatically if needed.)doc";

static const char *__doc_mitsuba_Stream_write_line = R"doc(Convenience function for writing a line of text to an ASCII file)doc";

static const char *__doc_mitsuba_Struct =
R"doc(Descriptor for specifying the contents and in-memory layout of a POD-
style data record

Remark:
    The python API provides an additional ``dtype``() method, which
    returns the NumPy ``dtype`` equivalent of a given ``Struct``
    instance.)doc";

static const char *__doc_mitsuba_StructConverter =
R"doc(This class solves the any-to-any problem: effiently converting from
one kind of structured data representation to another

Graphics applications often need to convert from one kind of
structured representation to another, for instance when loading/saving
image or mesh data. Consider the following data records which both
describe positions tagged with color data.

```
struct Source { // <-- Big endian! :(
   uint8_t r, g, b; // in sRGB
   half x, y, z;
};

struct Target { // <-- Little endian!
   float x, y, z;
   float r, g, b, a; // in linear space
};
```

The record ``Source`` may represent what is stored in a file on disk,
while ``Target`` represents the expected input of the implementation.
Not only are the formats (e.g. float vs half or uint8_t, incompatible
endianness) and encodings different (e.g. gamma correction vs linear
space), but the second record even has a different order and extra
fields that don't exist in the first one.

This class provides a routine convert() which <ol>

* reorders entries

* converts between many different formats (u[int]8-64, float16-64)

* performs endianness conversion

* applies or removes gamma correction

* optionally checks that certain entries have expected default values

* substitutes missing values with specified defaults

* performs linear transformations of groups of fields (e.g. between
different RGB color spaces)

* applies dithering to avoid banding artifacts when converting 2D
images

</ol>

The above operations can be arranged in countless ways, which makes it
hard to provide an efficient generic implementation of this
functionality. For this reason, the implementation of this class
relies on a JIT compiler that generates fast conversion code on demand
for each specific conversion. The function is cached and reused in
case the same conversion is needed later on. Note that JIT compilation
only works on x86_64 processors; other platforms use a slow generic
fallback implementation.)doc";

static const char *__doc_mitsuba_StructConverter_StructConverter =
R"doc(Construct an optimized conversion routine going from ``source`` to
``target``)doc";

static const char *__doc_mitsuba_StructConverter_Value = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_Value_flags = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_Value_type = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_class = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_convert = R"doc(Convert ``count`` elements. Returns ``True`` upon success)doc";

static const char *__doc_mitsuba_StructConverter_convert_2d = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_linearize = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_load = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_m_dither = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_m_source = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_m_target = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_save = R"doc()doc";

static const char *__doc_mitsuba_StructConverter_source = R"doc(Return the source ``Struct`` descriptor)doc";

static const char *__doc_mitsuba_StructConverter_target = R"doc(Return the target ``Struct`` descriptor)doc";

static const char *__doc_mitsuba_StructConverter_to_string = R"doc(Return a string representation)doc";

static const char *__doc_mitsuba_Struct_EByteOrder = R"doc(Byte order of the fields in the ``Struct``)doc";

static const char *__doc_mitsuba_Struct_EByteOrder_EBigEndian = R"doc()doc";

static const char *__doc_mitsuba_Struct_EByteOrder_EHostByteOrder = R"doc()doc";

static const char *__doc_mitsuba_Struct_EByteOrder_ELittleEndian = R"doc()doc";

static const char *__doc_mitsuba_Struct_EFlags = R"doc(Field-specific flags)doc";

static const char *__doc_mitsuba_Struct_EFlags_EAssert =
R"doc(In FieldConverter::convert, check that the field value matches the
specified default value. Otherwise, return a failure)doc";

static const char *__doc_mitsuba_Struct_EFlags_EDefault =
R"doc(In FieldConverter::convert, when the field is missing in the source
record, replace it by the specified default value)doc";

static const char *__doc_mitsuba_Struct_EFlags_EGamma =
R"doc(Specifies whether the field encodes a sRGB gamma-corrected value.
Assumes ``ENormalized`` is also specified.)doc";

static const char *__doc_mitsuba_Struct_EFlags_ENormalized =
R"doc(Specifies whether an integer field encodes a normalized value in the
range [0, 1]. The flag is ignored if specified for floating point
valued fields.)doc";

static const char *__doc_mitsuba_Struct_EFlags_EWeight =
R"doc(In FieldConverter::convert, when an input structure contains a weight
field, the value of all entries are considered to be expressed
relative to its value. Converting to an un-weighted structure entails
a division by the weight.)doc";

static const char *__doc_mitsuba_Struct_EType = R"doc(Type of a field in the ``Struct``)doc";

static const char *__doc_mitsuba_Struct_EType_EFloat = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EFloat16 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EFloat32 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EFloat64 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EInt16 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EInt32 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EInt64 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EInt8 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EInvalid = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EUInt16 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EUInt32 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EUInt64 = R"doc()doc";

static const char *__doc_mitsuba_Struct_EType_EUInt8 = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field = R"doc(Field specifier with size and offset)doc";

static const char *__doc_mitsuba_Struct_Field_blend =
R"doc(For use with StructConverter::convert()

Specifies a pair of weights and source field names that will be
linearly blended to obtain the output field value. Note that this only
works for floating point fields or integer fields with the ENormalized
flag. Gamma-corrected fields will be blended in linear space.)doc";

static const char *__doc_mitsuba_Struct_Field_default = R"doc(Default value)doc";

static const char *__doc_mitsuba_Struct_Field_flags = R"doc(Additional flags)doc";

static const char *__doc_mitsuba_Struct_Field_is_float = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field_is_integer = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field_is_signed = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field_is_unsigned = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field_name = R"doc(Name of the field)doc";

static const char *__doc_mitsuba_Struct_Field_offset = R"doc(Offset within the ``Struct`` (in bytes))doc";

static const char *__doc_mitsuba_Struct_Field_operator_eq = R"doc(Equality operator)doc";

static const char *__doc_mitsuba_Struct_Field_operator_ne = R"doc(Equality operator)doc";

static const char *__doc_mitsuba_Struct_Field_range = R"doc()doc";

static const char *__doc_mitsuba_Struct_Field_size = R"doc(Size in bytes)doc";

static const char *__doc_mitsuba_Struct_Field_type = R"doc(Type identifier)doc";

static const char *__doc_mitsuba_Struct_Struct =
R"doc(Create a new ``Struct`` and indicate whether the contents are packed
or aligned)doc";

static const char *__doc_mitsuba_Struct_Struct_2 = R"doc(Copy constructor)doc";

static const char *__doc_mitsuba_Struct_alignment = R"doc(Return the alignment (in bytes) of the data structure)doc";

static const char *__doc_mitsuba_Struct_append =
R"doc(Append a new field to the ``Struct``; determines size and offset
automatically)doc";

static const char *__doc_mitsuba_Struct_append_2 = R"doc(Append a new field to the ``Struct`` (manual version))doc";

static const char *__doc_mitsuba_Struct_begin = R"doc(Return an iterator associated with the first field)doc";

static const char *__doc_mitsuba_Struct_begin_2 = R"doc(Return an iterator associated with the first field)doc";

static const char *__doc_mitsuba_Struct_byte_order = R"doc(Return the byte order of the ``Struct``)doc";

static const char *__doc_mitsuba_Struct_class = R"doc()doc";

static const char *__doc_mitsuba_Struct_end = R"doc(Return an iterator associated with the end of the data structure)doc";

static const char *__doc_mitsuba_Struct_end_2 = R"doc(Return an iterator associated with the end of the data structure)doc";

static const char *__doc_mitsuba_Struct_field = R"doc(Look up a field by name (throws an exception if not found))doc";

static const char *__doc_mitsuba_Struct_field_2 = R"doc(Look up a field by name. Throws an exception if not found)doc";

static const char *__doc_mitsuba_Struct_field_count = R"doc(Return the number of fields)doc";

static const char *__doc_mitsuba_Struct_has_field = R"doc(Check if the ``Struct`` has a field of the specified name)doc";

static const char *__doc_mitsuba_Struct_host_byte_order = R"doc(Return the byte order of the host machine)doc";

static const char *__doc_mitsuba_Struct_is_float = R"doc(Check whether the given type is a floating point type)doc";

static const char *__doc_mitsuba_Struct_is_integer = R"doc(Check whether the given type is an integer type)doc";

static const char *__doc_mitsuba_Struct_is_signed = R"doc(Check whether the given type is a signed type)doc";

static const char *__doc_mitsuba_Struct_is_unsigned = R"doc(Check whether the given type is an unsigned type)doc";

static const char *__doc_mitsuba_Struct_m_byte_order = R"doc()doc";

static const char *__doc_mitsuba_Struct_m_fields = R"doc()doc";

static const char *__doc_mitsuba_Struct_m_pack = R"doc()doc";

static const char *__doc_mitsuba_Struct_offset = R"doc(Return the offset of the i-th field)doc";

static const char *__doc_mitsuba_Struct_offset_2 = R"doc(Return the offset of field with the given name)doc";

static const char *__doc_mitsuba_Struct_operator_array = R"doc(Access an individual field entry)doc";

static const char *__doc_mitsuba_Struct_operator_array_2 = R"doc(Access an individual field entry)doc";

static const char *__doc_mitsuba_Struct_operator_eq = R"doc(Equality operator)doc";

static const char *__doc_mitsuba_Struct_operator_ne = R"doc(Inequality operator)doc";

static const char *__doc_mitsuba_Struct_range = R"doc(Return the representable range of the given type)doc";

static const char *__doc_mitsuba_Struct_size = R"doc(Return the size (in bytes) of the data structure, including padding)doc";

static const char *__doc_mitsuba_Struct_to_string = R"doc(Return a string representation)doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_SurfaceAreaHeuristic3f = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_empty_space_bonus =
R"doc(Return the bonus factor for empty space used by the tree construction
heuristic)doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_eval = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_inner_cost =
R"doc(Evaluate the surface area heuristic

Given a split on axis *axis* at position *split*, compute the
probability of traversing the left and right child during a typical
query operation. In the case of the surface area heuristic, this is
simply the ratio of surface areas.)doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_leaf_cost = R"doc(Evaluate the cost of a leaf node)doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_empty_space_bonus = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_query_cost = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_temp0 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_temp1 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_temp2 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_m_traversal_cost = R"doc()doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_query_cost =
R"doc(Return the query cost used by the tree construction heuristic

(This is the average cost for testing a shape against a kd-tree query))doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_set_bounding_box =
R"doc(Initialize the surface area heuristic with the bounds of a parent node

Precomputes some information so that traversal probabilities of
potential split planes can be evaluated efficiently)doc";

static const char *__doc_mitsuba_SurfaceAreaHeuristic3f_traversal_cost =
R"doc(Get the cost of a traversal operation used by the tree construction
heuristic)doc";

static const char *__doc_mitsuba_SurfaceInteraction =
R"doc(Container for all information related to a scattering event on a
surface)doc";

static const char *__doc_mitsuba_SurfaceInteraction_SurfaceInteraction =
R"doc(Construct from a position sample. Unavailable fields such as `wi` and
the partial derivatives are left uninitialized. The `shape` pointer is
left uninitialized because we can't guarantee that the given
PositionSample::object points to a Shape instance.)doc";

static const char *__doc_mitsuba_SurfaceInteraction_SurfaceInteraction_2 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_SurfaceInteraction_3 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_SurfaceInteraction_4 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_SurfaceInteraction_5 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_bsdf =
R"doc(Returns the BSDF of the intersected shape.

The parameter ``ray`` must match the one used to create the
interaction record. This function computes texture coordinate partials
if this is required by the BSDF (e.g. for texture filtering).

Implementation in 'bsdf.h')doc";

static const char *__doc_mitsuba_SurfaceInteraction_bsdf_2 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_compute_partials = R"doc(Computes texture coordinate partials)doc";

static const char *__doc_mitsuba_SurfaceInteraction_dp_du = R"doc(Position partials wrt. the UV parameterization)doc";

static const char *__doc_mitsuba_SurfaceInteraction_dp_dv = R"doc(Position partials wrt. the UV parameterization)doc";

static const char *__doc_mitsuba_SurfaceInteraction_duv_dx = R"doc(UV partials wrt. changes in screen-space)doc";

static const char *__doc_mitsuba_SurfaceInteraction_duv_dy = R"doc(UV partials wrt. changes in screen-space)doc";

static const char *__doc_mitsuba_SurfaceInteraction_emitter = R"doc(Return the emitter associated with the intersection (if any))doc";

static const char *__doc_mitsuba_SurfaceInteraction_has_uv_partials = R"doc(//! @})doc";

static const char *__doc_mitsuba_SurfaceInteraction_instance = R"doc(Stores a pointer to the parent instance (if applicable))doc";

static const char *__doc_mitsuba_SurfaceInteraction_is_medium_transition = R"doc(Does the surface mark a transition between two media?)doc";

static const char *__doc_mitsuba_SurfaceInteraction_is_sensor = R"doc(Is the intersected shape also a sensor?)doc";

static const char *__doc_mitsuba_SurfaceInteraction_n = R"doc(Geometric normal)doc";

static const char *__doc_mitsuba_SurfaceInteraction_normal_derivative = R"doc(Calls the suitable implementation of Shape::normal_derivative())doc";

static const char *__doc_mitsuba_SurfaceInteraction_operator_array = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_SurfaceInteraction_prim_index = R"doc(Primitive index, e.g. the triangle ID (if applicable))doc";

static const char *__doc_mitsuba_SurfaceInteraction_sh_frame = R"doc(Shading frame)doc";

static const char *__doc_mitsuba_SurfaceInteraction_shape = R"doc(Pointer to the associated shape)doc";

static const char *__doc_mitsuba_SurfaceInteraction_target_medium =
R"doc(Determine the target medium

When ``is_medium_transition``() = ``True``, determine the medium that
contains the ray (``this``->p, ``d``))doc";

static const char *__doc_mitsuba_SurfaceInteraction_target_medium_2 =
R"doc(Determine the target medium based on the cosine of the angle between
the geometric normal and a direction

Returns the exterior medium when ``cos_theta`` > 0 and the interior
medium when ``cos_theta`` <= 0.)doc";

static const char *__doc_mitsuba_SurfaceInteraction_to_local = R"doc(Convert a world-space vector into local shading coordinates)doc";

static const char *__doc_mitsuba_SurfaceInteraction_to_world = R"doc(Convert a local shading-space vector into world space)doc";

static const char *__doc_mitsuba_SurfaceInteraction_uv = R"doc(UV surface coordinates)doc";

static const char *__doc_mitsuba_SurfaceInteraction_wi = R"doc(Incident direction in the local shading frame)doc";

static const char *__doc_mitsuba_TShapeKDTree =
R"doc(Optimized KD-tree acceleration data structure for n-dimensional (n<=4)
shapes and various queries involving them.

Note that this class mainly concerns itself with primitives that cover
*a region* of space. For point data, other implementations will be
more suitable. The most important application in Mitsuba is the fast
construction of high-quality trees for ray tracing. See the class
ShapeKDTree for this specialization.

The code in this class is a fully generic kd-tree implementation,
which can theoretically support any kind of shape. However, subclasses
still need to provide the following signatures for a functional
implementation:

```
/// Return the total number of primitives
Size primitive_count() const;

/// Return the axis-aligned bounding box of a certain primitive
BoundingBox bbox(Index primIdx) const;

/// Return the bounding box of a primitive when clipped to another bounding box
BoundingBox bbox(Index primIdx, const BoundingBox &aabb) const;
```

This class follows the "Curiously recurring template" design pattern
so that the above functions can be inlined (in particular, no virtual
calls will be necessary!).

When the kd-tree is initially built, this class optimizes a cost
heuristic every time a split plane has to be chosen. For ray tracing,
the heuristic is usually the surface area heuristic (SAH), but other
choices are possible as well. The tree cost model must be passed as a
template argument, which can use a supplied bounding box and split
candidate to compute approximate probabilities of recursing into the
left and right subrees during a typical kd-tree query operation. See
SurfaceAreaHeuristic3f for an example of the interface that must be
implemented.

The kd-tree construction algorithm creates 'perfect split' trees as
outlined in the paper "On Building fast kd-Trees for Ray Tracing, and
on doing that in O(N log N)" by Ingo Wald and Vlastimil Havran. This
works even when the tree is not meant to be used for ray tracing. For
polygonal meshes, the involved Sutherland-Hodgman iterations can be
quite expensive in terms of the overall construction time. The
set_clip_primitives() method can be used to deactivate perfect splits
at the cost of a lower-quality tree.

Because the O(N log N) construction algorithm tends to cause many
incoherent memory accesses and does not parallelize particularly well,
a different method known as *Min-Max Binning* is used for the top
levels of the tree. Min-Max-binning is an approximation to the O(N log
N) approach, which works extremely well at the top of the tree (i.e.
when there are many elements). This algorithm realized as a series of
efficient parallel sweeps that harness the available cores at all
levels (even at the root node). Each iteration splits the list of
primitives into independent subtrees which can also be processed in
parallel. Eventually, the input data is reduced into sufficiently
small chunks, at which point the implementation switches over to the
more accurate O(N log N) builder. The various thresholds and
parameters for these different methods can be accessed and configured
via getters and setters of this class.)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext =
R"doc(Helper data structure used during tree construction (shared by all
threads))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_2 =
R"doc(Helper data structure used during tree construction (shared by all
threads))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_BuildContext = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_bad_refines = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_derived = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_env = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_exp_leaves_visited = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_exp_primitives_queried = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_exp_traversal_steps = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_index_storage = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_local = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_max_depth = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_max_prims_in_leaf = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_node_storage = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_nonempty_leaf_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_prim_buckets = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_pruned = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_retracted_splits = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_temp_storage = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildContext_work_units = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask =
R"doc(TBB task for building subtrees in parallel

This class is responsible for building a subtree of the final kd-tree.
It recursively spawns new tasks for its respective subtrees to enable
parallel construction.

At the top of the tree, it uses min-max-binning and parallel
reductions to create sufficient parallelism. When the number of
elements is sufficiently small, it switches to a more accurate O(N log
N) builder which uses normal recursion on the stack (i.e. it does not
spawn further parallel pieces of work).)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_BuildTask = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_build_nlogn = R"doc(Recursively run the O(N log N builder))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_execute = R"doc(Run one iteration of min-max binning and spawn recursive tasks)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_bad_refines = R"doc(Number of "bad refines" so far)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_bbox = R"doc(Bounding box of the node)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_cost = R"doc(This scalar should be set to the final cost when done)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_ctx = R"doc(Context with build-specific variables (shared by all threads/tasks))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_depth = R"doc(Depth of the node within the tree)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_indices = R"doc(Index list of primitives to be organized)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_local = R"doc(Local context with thread local variables)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_node = R"doc(Node to be initialized by this task)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_m_tight_bbox = R"doc(Tighter bounding box of the contained primitives)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_make_leaf =
R"doc(Create a leaf node using the given set of indices (called by min-max
binning))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_make_leaf_2 =
R"doc(Create a leaf node using the given edge event list (called by the O(N
log N) builder))doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_transition_to_nlogn =
R"doc(Create an initial sorted edge event list and start the O(N log N)
builder)doc";

static const char *__doc_mitsuba_TShapeKDTree_BuildTask_traverse =
R"doc(Traverse a subtree and collect all encountered primitive references in
a set)doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage =
R"doc(Compact storage for primitive classification

When classifying primitives with respect to a split plane, a data
structure is needed to hold the tertiary result of this operation.
This class implements a compact storage (2 bits per entry) in the
spirit of the std::vector<bool> specialization.)doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_get = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_m_buffer = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_m_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_resize = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_set = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_ClassificationStorage_size = R"doc(Return the size (in bytes))doc";

static const char *__doc_mitsuba_TShapeKDTree_EPrimClassification =
R"doc(Enumeration representing the state of a classified primitive in the
O(N log N) builder)doc";

static const char *__doc_mitsuba_TShapeKDTree_EPrimClassification_EBoth = R"doc(< Primitive straddles the split plane)doc";

static const char *__doc_mitsuba_TShapeKDTree_EPrimClassification_EIgnore = R"doc(< Primitive was handled already, ignore from now on)doc";

static const char *__doc_mitsuba_TShapeKDTree_EPrimClassification_ELeft = R"doc(< Primitive is left of the split plane)doc";

static const char *__doc_mitsuba_TShapeKDTree_EPrimClassification_ERight = R"doc(< Primitive is right of the split plane)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent =
R"doc(Describes the beginning or end of a primitive under orthogonal
projection onto different axes)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EEventType = R"doc(Possible event types)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EEventType_EEdgeEnd = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EEventType_EEdgePlanar = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EEventType_EEdgeStart = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EdgeEvent = R"doc(Dummy constructor)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_EdgeEvent_2 = R"doc(Create a new edge event)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_axis = R"doc(Event axis)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_index = R"doc(Primitive index)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_operator_lt = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_pos = R"doc(Plane position)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_set_invalid = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_type = R"doc(Event type: end/planar/start)doc";

static const char *__doc_mitsuba_TShapeKDTree_EdgeEvent_valid = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode = R"doc(kd-tree node in 8 bytes.)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_axis = R"doc(Return the split axis (for interior nodes))doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_data = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_leaf = R"doc(Is this a leaf node?)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_left = R"doc(Return the left child (for interior nodes))doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_left_offset =
R"doc(Assuming that this is an inner node, return the relative offset to the
left child)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_primitive_count = R"doc(Assuming this is a leaf node, return the number of primitives)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_primitive_offset = R"doc(Assuming this is a leaf node, return the first primitive index)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_right = R"doc(Return the left child (for interior nodes))doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_set_inner_node =
R"doc(Initialize an interior kd-tree node.

Returns ``False`` if the offset or number of primitives is so large
that it can't be represented)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_set_leaf_node =
R"doc(Initialize a leaf kd-tree node.

Returns ``False`` if the offset or number of primitives is so large
that it can't be represented)doc";

static const char *__doc_mitsuba_TShapeKDTree_KDNode_split = R"doc(Return the split plane location (for interior nodes))doc";

static const char *__doc_mitsuba_TShapeKDTree_LocalBuildContext =
R"doc(Helper data structure used during tree construction (used by a single
thread))doc";

static const char *__doc_mitsuba_TShapeKDTree_LocalBuildContext_classification_storage = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_LocalBuildContext_ctx = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_LocalBuildContext_left_alloc = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_LocalBuildContext_right_alloc = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins =
R"doc(Min-max binning data structure with parallel binning & partitioning
steps

See "Highly Parallel Fast KD-tree Construction for Interactive Ray
Tracing of Dynamic Scenes" by M. Shevtsov, A. Soupikov and A. Kapustin)doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_MinMaxBins = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_MinMaxBins_2 = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_MinMaxBins_3 = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_Partition = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_Partition_left_bounds = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_Partition_left_indices = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_Partition_right_bounds = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_Partition_right_indices = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_best_candidate = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_m_bbox = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_m_bin_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_m_bins = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_m_inv_bin_size = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_m_max_bin = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_operator_iadd = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_partition =
R"doc(Given a suitable split candidate, compute tight bounding boxes for the
left and right subtrees and return associated primitive lists.)doc";

static const char *__doc_mitsuba_TShapeKDTree_MinMaxBins_put = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator =
R"doc(During kd-tree construction, large amounts of memory are required to
temporarily hold index and edge event lists. When not implemented
properly, these allocations can become a critical bottleneck. The
class OrderedChunkAllocator provides a specialized memory allocator,
which reserves memory in chunks of at least 512KiB (this number is
configurable). An important assumption made by the allocator is that
memory will be released in the exact same order in which it was
previously allocated. This makes it possible to create an
implementation with a very low memory overhead. Note that no locking
is done, hence each thread will need its own allocator.)doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_Chunk = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_contains = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_cur = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_remainder = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_size = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_start = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_Chunk_used = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_OrderedChunkAllocator = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_allocate =
R"doc(Request a block of memory from the allocator

Walks through the list of chunks to find one with enough free memory.
If no chunk could be found, a new one is created.)doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_chunk_count = R"doc(Return the currently allocated number of chunks)doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_m_chunks = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_m_min_allocation = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_release = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_shrink_allocation = R"doc(Shrink the size of the last allocated chunk)doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_size = R"doc(Return the total amount of chunk memory in bytes)doc";

static const char *__doc_mitsuba_TShapeKDTree_OrderedChunkAllocator_used = R"doc(Return the total amount of used memory in bytes)doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate = R"doc(Data type for split candidates suggested by the tree cost model)doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_axis = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_cost = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_left_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_planar_left = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_right_bin = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_right_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_SplitCandidate_split = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_TShapeKDTree = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_bbox = R"doc(Return the bounding box of the entire kd-tree)doc";

static const char *__doc_mitsuba_TShapeKDTree_build = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_class = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_clip_primitives = R"doc(Return whether primitive clipping is used during tree construction)doc";

static const char *__doc_mitsuba_TShapeKDTree_compute_statistics = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_cost_model = R"doc(Return the cost model used by the tree construction algorithm)doc";

static const char *__doc_mitsuba_TShapeKDTree_derived = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_derived_2 = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_exact_primitive_threshold =
R"doc(Return the number of primitives, at which the builder will switch from
(approximate) Min-Max binning to the accurate O(n log n) optimization
method.)doc";

static const char *__doc_mitsuba_TShapeKDTree_log_level = R"doc(Return the log level of kd-tree status messages)doc";

static const char *__doc_mitsuba_TShapeKDTree_m_bbox = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_clip_primitives = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_cost_model = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_exact_prim_threshold = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_index_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_indices = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_log_level = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_max_bad_refines = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_max_depth = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_min_max_bins = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_node_count = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_nodes = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_retract_bad_splits = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_m_stop_primitives = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_max_bad_refines =
R"doc(Return the number of bad refines allowed to happen in succession
before a leaf node will be created.)doc";

static const char *__doc_mitsuba_TShapeKDTree_max_depth = R"doc(Return the maximum tree depth (0 == use heuristic))doc";

static const char *__doc_mitsuba_TShapeKDTree_min_max_bins = R"doc(Return the number of bins used for Min-Max binning)doc";

static const char *__doc_mitsuba_TShapeKDTree_ready = R"doc()doc";

static const char *__doc_mitsuba_TShapeKDTree_retract_bad_splits = R"doc(Return whether or not bad splits can be "retracted".)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_clip_primitives = R"doc(Set whether primitive clipping is used during tree construction)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_exact_primitive_threshold =
R"doc(Specify the number of primitives, at which the builder will switch
from (approximate) Min-Max binning to the accurate O(n log n)
optimization method.)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_log_level = R"doc(Return the log level of kd-tree status messages)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_max_bad_refines =
R"doc(Set the number of bad refines allowed to happen in succession before a
leaf node will be created.)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_max_depth = R"doc(Set the maximum tree depth (0 == use heuristic))doc";

static const char *__doc_mitsuba_TShapeKDTree_set_min_max_bins = R"doc(Set the number of bins used for Min-Max binning)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_retract_bad_splits = R"doc(Specify whether or not bad splits can be "retracted".)doc";

static const char *__doc_mitsuba_TShapeKDTree_set_stop_primitives =
R"doc(Set the number of primitives, at which recursion will stop when
building the tree.)doc";

static const char *__doc_mitsuba_TShapeKDTree_stop_primitives =
R"doc(Return the number of primitives, at which recursion will stop when
building the tree.)doc";

static const char *__doc_mitsuba_TensorFile =
R"doc(Simple exchange format for tensor data of arbitrary rank and size

This class provides convenient memory-mapped read-only access to
tensor data, usually exported from NumPy.)doc";

static const char *__doc_mitsuba_TensorFile_Field = R"doc(Information about the specified field)doc";

static const char *__doc_mitsuba_TensorFile_Field_data = R"doc(Const pointer to the start of the tensor)doc";

static const char *__doc_mitsuba_TensorFile_Field_dtype = R"doc(Data type (uint32, float, ...) of the tensor)doc";

static const char *__doc_mitsuba_TensorFile_Field_offset = R"doc(Offset within the file)doc";

static const char *__doc_mitsuba_TensorFile_Field_shape = R"doc(Specifies both rank and size along each dimension)doc";

static const char *__doc_mitsuba_TensorFile_TensorFile = R"doc(Map the specified file into memory)doc";

static const char *__doc_mitsuba_TensorFile_class = R"doc()doc";

static const char *__doc_mitsuba_TensorFile_field = R"doc(Return a data structure with information about the specified field)doc";

static const char *__doc_mitsuba_TensorFile_has_field = R"doc(Does the file contain a field of the specified name?)doc";

static const char *__doc_mitsuba_TensorFile_m_fields = R"doc()doc";

static const char *__doc_mitsuba_TensorFile_to_string = R"doc(Return a human-readable summary)doc";

static const char *__doc_mitsuba_Thread =
R"doc(Cross-platform thread implementation

Mitsuba threads are internally implemented via the ``std::thread``
class defined in C++11. This wrapper class is needed to attach
additional state (Loggers, Path resolvers, etc.) that is inherited
when a thread launches another thread.)doc";

static const char *__doc_mitsuba_ThreadEnvironment =
R"doc(Captures a thread environment (logger, file resolver, profiler flags).
Used with ScopedSetThreadEnvironment)doc";

static const char *__doc_mitsuba_ThreadEnvironment_ThreadEnvironment = R"doc()doc";

static const char *__doc_mitsuba_ThreadEnvironment_ThreadEnvironment_2 = R"doc()doc";

static const char *__doc_mitsuba_ThreadEnvironment_m_file_resolver = R"doc()doc";

static const char *__doc_mitsuba_ThreadEnvironment_m_logger = R"doc()doc";

static const char *__doc_mitsuba_ThreadEnvironment_m_profiler_flags = R"doc()doc";

static const char *__doc_mitsuba_ThreadEnvironment_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_ThreadLocal =
R"doc(Flexible platform-independent thread local storage class

This class implements a generic thread local storage object. For
details, refer to its base class, ThreadLocalBase.)doc";

static const char *__doc_mitsuba_ThreadLocalBase =
R"doc(Flexible platform-independent thread local storage class

This class implements a generic thread local storage object that can
be used in situations where the new ``thread_local`` keyword is not
available (e.g. on Mac OS, as of 2016), or when TLS object are created
dynamically (which ``thread_local`` does not allow).

The native TLS classes on Linux/MacOS/Windows only support a limited
number of dynamically allocated entries (usually 1024 or 1088).
Furthermore, they do not provide appropriate cleanup semantics when
the TLS object or one of the assocated threads dies. The custom TLS
code provided by this class has no such limits (caching in various
subsystems of Mitsuba may create a huge amount, so this is a big
deal), and it also has the desired cleanup semantics: TLS entries are
destroyed when the owning thread dies *or* when the ``ThreadLocal``
instance is freed (whichever occurs first).

The implementation is designed to make the ``get``() operation as fast
as as possible at the cost of more involved locking when creating or
destroying threads and TLS objects. To actually instantiate a TLS
object with a specific type, use the ThreadLocal class.

See also:
    ThreadLocal)doc";

static const char *__doc_mitsuba_ThreadLocalBase_ThreadLocalBase = R"doc(Construct a new thread local storage object)doc";

static const char *__doc_mitsuba_ThreadLocalBase_clear =
R"doc(Release all current instances associated with this TLS

Dangerous: don't use this method when the data is still concurrently
being used by other threads)doc";

static const char *__doc_mitsuba_ThreadLocalBase_get = R"doc(Return the data value associated with the current thread)doc";

static const char *__doc_mitsuba_ThreadLocalBase_get_2 =
R"doc(Return the data value associated with the current thread (const
version))doc";

static const char *__doc_mitsuba_ThreadLocalBase_m_construct_functor = R"doc()doc";

static const char *__doc_mitsuba_ThreadLocalBase_m_destruct_functor = R"doc()doc";

static const char *__doc_mitsuba_ThreadLocalBase_register_thread =
R"doc(A new thread was started -- set up local TLS data structures. Returns
``True`` upon success)doc";

static const char *__doc_mitsuba_ThreadLocalBase_static_initialization = R"doc(Set up core data structures for TLS management)doc";

static const char *__doc_mitsuba_ThreadLocalBase_static_shutdown = R"doc(Destruct core data structures for TLS management)doc";

static const char *__doc_mitsuba_ThreadLocalBase_unregister_thread =
R"doc(A thread has died -- destroy any remaining TLS entries associated with
it)doc";

static const char *__doc_mitsuba_ThreadLocal_ThreadLocal = R"doc(Construct a new thread local storage object)doc";

static const char *__doc_mitsuba_ThreadLocal_operator_T0 = R"doc(Return a reference to the data associated with the current thread)doc";

static const char *__doc_mitsuba_ThreadLocal_operator_assign = R"doc(Update the data associated with the current thread)doc";

static const char *__doc_mitsuba_ThreadLocal_operator_const_T0 =
R"doc(Return a reference to the data associated with the current thread
(const version))doc";

static const char *__doc_mitsuba_Thread_EPriority = R"doc(Possible priority values for Thread::set_priority())doc";

static const char *__doc_mitsuba_Thread_EPriority_EHighPriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_EHighestPriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_EIdlePriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_ELowPriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_ELowestPriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_ENormalPriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_EPriority_ERealtimePriority = R"doc()doc";

static const char *__doc_mitsuba_Thread_TaskObserver = R"doc()doc";

static const char *__doc_mitsuba_Thread_Thread =
R"doc(Create a new thread object

Parameter ``name``:
    An identifying name of this thread (will be shown in debug
    messages))doc";

static const char *__doc_mitsuba_Thread_ThreadPrivate = R"doc()doc";

static const char *__doc_mitsuba_Thread_class = R"doc()doc";

static const char *__doc_mitsuba_Thread_core_affinity = R"doc(Return the core affinity)doc";

static const char *__doc_mitsuba_Thread_d = R"doc()doc";

static const char *__doc_mitsuba_Thread_detach =
R"doc(Detach the thread and release resources

After a call to this function, join() cannot be used anymore. This
releases resources, which would otherwise be held until a call to
join().)doc";

static const char *__doc_mitsuba_Thread_dispatch = R"doc(Initialize thread execution environment and then call run())doc";

static const char *__doc_mitsuba_Thread_exit = R"doc(Exit the thread, should be called from inside the thread)doc";

static const char *__doc_mitsuba_Thread_file_resolver = R"doc(Return the file resolver associated with the current thread)doc";

static const char *__doc_mitsuba_Thread_file_resolver_2 = R"doc(Return the parent thread (const version))doc";

static const char *__doc_mitsuba_Thread_id = R"doc(Return a unique ID that is associated with this thread)doc";

static const char *__doc_mitsuba_Thread_is_critical = R"doc(Return the value of the critical flag)doc";

static const char *__doc_mitsuba_Thread_is_running = R"doc(Is this thread still running?)doc";

static const char *__doc_mitsuba_Thread_join = R"doc(Wait until the thread finishes)doc";

static const char *__doc_mitsuba_Thread_logger = R"doc(Return the thread's logger instance)doc";

static const char *__doc_mitsuba_Thread_name = R"doc(Return the name of this thread)doc";

static const char *__doc_mitsuba_Thread_parent = R"doc(Return the parent thread)doc";

static const char *__doc_mitsuba_Thread_parent_2 = R"doc(Return the parent thread (const version))doc";

static const char *__doc_mitsuba_Thread_priority = R"doc(Return the thread priority)doc";

static const char *__doc_mitsuba_Thread_run = R"doc(The thread's run method)doc";

static const char *__doc_mitsuba_Thread_set_core_affinity =
R"doc(Set the core affinity

This function provides a hint to the operating system scheduler that
the thread should preferably run on the specified processor core. By
default, the parameter is set to -1, which means that there is no
affinity.)doc";

static const char *__doc_mitsuba_Thread_set_critical =
R"doc(Specify whether or not this thread is critical

When an thread marked critical crashes from an uncaught exception, the
whole process is brought down. The default is ``False``.)doc";

static const char *__doc_mitsuba_Thread_set_file_resolver = R"doc(Set the file resolver associated with the current thread)doc";

static const char *__doc_mitsuba_Thread_set_logger = R"doc(Set the logger instance used to process log messages from this thread)doc";

static const char *__doc_mitsuba_Thread_set_name = R"doc(Set the name of this thread)doc";

static const char *__doc_mitsuba_Thread_set_priority =
R"doc(Set the thread priority

This does not always work -- for instance, Linux requires root
privileges for this operation.

Returns:
    ``True`` upon success.)doc";

static const char *__doc_mitsuba_Thread_sleep = R"doc(Sleep for a certain amount of time (in milliseconds))doc";

static const char *__doc_mitsuba_Thread_start = R"doc(Start the thread)doc";

static const char *__doc_mitsuba_Thread_static_initialization = R"doc(Initialize the threading system)doc";

static const char *__doc_mitsuba_Thread_static_shutdown = R"doc(Shut down the threading system)doc";

static const char *__doc_mitsuba_Thread_thread = R"doc(Return the current thread)doc";

static const char *__doc_mitsuba_Thread_to_string = R"doc(Return a string representation)doc";

static const char *__doc_mitsuba_Thread_yield = R"doc(Yield to another processor)doc";

static const char *__doc_mitsuba_Timer = R"doc()doc";

static const char *__doc_mitsuba_Timer_Timer = R"doc()doc";

static const char *__doc_mitsuba_Timer_begin_stage = R"doc()doc";

static const char *__doc_mitsuba_Timer_end_stage = R"doc()doc";

static const char *__doc_mitsuba_Timer_reset = R"doc()doc";

static const char *__doc_mitsuba_Timer_start = R"doc()doc";

static const char *__doc_mitsuba_Timer_value = R"doc()doc";

static const char *__doc_mitsuba_Transform =
R"doc(Encapsulates a 4x4 homogeneous coordinate transformation along with
its inverse transpose

The Transform class provides a set of overloaded matrix-vector
multiplication operators for vectors, points, and normals (all of them
behave differently under homogeneous coordinate transformations, hence
the need to represent them using separate types))doc";

static const char *__doc_mitsuba_Transform_Transform =
R"doc(Initialize the transformation from the given matrix (and compute its
inverse transpose))doc";

static const char *__doc_mitsuba_Transform_Transform_2 = R"doc()doc";

static const char *__doc_mitsuba_Transform_Transform_3 = R"doc()doc";

static const char *__doc_mitsuba_Transform_Transform_4 = R"doc()doc";

static const char *__doc_mitsuba_Transform_Transform_5 = R"doc()doc";

static const char *__doc_mitsuba_Transform_extract = R"doc(Extract a lower-dimensional submatrix)doc";

static const char *__doc_mitsuba_Transform_from_frame =
R"doc(Creates a transformation that converts from 'frame' to the standard
basis)doc";

static const char *__doc_mitsuba_Transform_has_scale =
R"doc(Test for a scale component in each transform matrix by checking
whether ``M . M^T == I`` (where ``M`` is the matrix in question and
``I`` is the identity).)doc";

static const char *__doc_mitsuba_Transform_inverse =
R"doc(Compute the inverse of this transformation (involves just shuffles, no
arithmetic))doc";

static const char *__doc_mitsuba_Transform_inverse_transpose = R"doc()doc";

static const char *__doc_mitsuba_Transform_look_at =
R"doc(Create a look-at camera transformation

Parameter ``origin``:
    Camera position

Parameter ``target``:
    Target vector

Parameter ``up``:
    Up vector)doc";

static const char *__doc_mitsuba_Transform_matrix = R"doc(//! @{ \name Fields)doc";

static const char *__doc_mitsuba_Transform_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Transform_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_Transform_operator_eq = R"doc(Equality comparison operator)doc";

static const char *__doc_mitsuba_Transform_operator_mul = R"doc(Concatenate transformations)doc";

static const char *__doc_mitsuba_Transform_operator_mul_2 =
R"doc(Transform a 3D point

Remark:
    In the Python API, this method is named ``transform_point``)doc";

static const char *__doc_mitsuba_Transform_operator_mul_3 =
R"doc(Transform a 3D vector

Remark:
    In the Python API, this method is named ``transform_vector``)doc";

static const char *__doc_mitsuba_Transform_operator_mul_4 =
R"doc(Transform a 3D normal vector

Remark:
    In the Python API, this method is named ``transform_normal``)doc";

static const char *__doc_mitsuba_Transform_operator_mul_5 = R"doc(Transform a ray (for perspective transformations))doc";

static const char *__doc_mitsuba_Transform_operator_ne = R"doc(Inequality comparison operator)doc";

static const char *__doc_mitsuba_Transform_orthographic =
R"doc(Create an orthographic transformation, which maps Z to [0,1] and
leaves the X and Y coordinates untouched.

Parameter ``near``:
    Near clipping plane

Parameter ``far``:
    Far clipping plane)doc";

static const char *__doc_mitsuba_Transform_perspective =
R"doc(Create a perspective transformation. (Maps [near, far] to [0, 1])

Projects vectors in camera space onto a plane at z=1:

x_proj = x / z y_proj = y / z z_proj = (far * (z - near)) / (z * (far-
near))

Camera-space depths are not mapped linearly!

Parameter ``fov``:
    Field of view in degrees

Parameter ``near``:
    Near clipping plane

Parameter ``far``:
    Far clipping plane)doc";

static const char *__doc_mitsuba_Transform_rotate =
R"doc(Create a rotation transformation around an arbitrary axis in 3D. The
angle is specified in degrees)doc";

static const char *__doc_mitsuba_Transform_rotate_2 =
R"doc(Create a rotation transformation in 2D. The angle is specified in
degrees)doc";

static const char *__doc_mitsuba_Transform_scale = R"doc(Create a scale transformation)doc";

static const char *__doc_mitsuba_Transform_to_frame =
R"doc(Creates a transformation that converts from the standard basis to
'frame')doc";

static const char *__doc_mitsuba_Transform_transform_affine =
R"doc(Transform a 3D vector/point/normal/ray by a transformation that is
known to be an affine 3D transformation (i.e. no perspective))doc";

static const char *__doc_mitsuba_Transform_transform_affine_2 =
R"doc(Transform a point (handles affine/non-perspective transformations
only))doc";

static const char *__doc_mitsuba_Transform_transform_affine_3 = R"doc(Transform a ray (for affine/non-perspective transformations))doc";

static const char *__doc_mitsuba_Transform_translate = R"doc(Create a translation transformation)doc";

static const char *__doc_mitsuba_Transform_translation = R"doc(Get the translation part of a matrix)doc";

static const char *__doc_mitsuba_Vector = R"doc(//! @{ \name Elementary vector, point, and normal data types)doc";

static const char *__doc_mitsuba_Vector_Vector = R"doc()doc";

static const char *__doc_mitsuba_Vector_Vector_2 = R"doc()doc";

static const char *__doc_mitsuba_Vector_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_Vector_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_ZStream =
R"doc(Transparent compression/decompression stream based on ``zlib``.

This class transparently decompresses and compresses reads and writes
to a nested stream, respectively.)doc";

static const char *__doc_mitsuba_ZStream_EStreamType = R"doc()doc";

static const char *__doc_mitsuba_ZStream_EStreamType_EDeflateStream = R"doc(< A raw deflate stream)doc";

static const char *__doc_mitsuba_ZStream_EStreamType_EGZipStream = R"doc(< A gzip-compatible stream)doc";

static const char *__doc_mitsuba_ZStream_ZStream =
R"doc(Creates a new compression stream with the given underlying stream.
This new instance takes ownership of the child stream. The child
stream must outlive the ZStream.)doc";

static const char *__doc_mitsuba_ZStream_can_read = R"doc(Can we read from the stream?)doc";

static const char *__doc_mitsuba_ZStream_can_write = R"doc(Can we write to the stream?)doc";

static const char *__doc_mitsuba_ZStream_child_stream = R"doc(Returns the child stream of this compression stream)doc";

static const char *__doc_mitsuba_ZStream_child_stream_2 = R"doc(Returns the child stream of this compression stream)doc";

static const char *__doc_mitsuba_ZStream_class = R"doc()doc";

static const char *__doc_mitsuba_ZStream_close =
R"doc(Closes the stream, but not the underlying child stream. No further
read or write operations are permitted.

This function is idempotent. It is called automatically by the
destructor.)doc";

static const char *__doc_mitsuba_ZStream_flush = R"doc(Flushes any buffered data)doc";

static const char *__doc_mitsuba_ZStream_is_closed = R"doc(Whether the stream is closed (no read or write are then permitted).)doc";

static const char *__doc_mitsuba_ZStream_m_child_stream = R"doc()doc";

static const char *__doc_mitsuba_ZStream_m_deflate_buffer = R"doc()doc";

static const char *__doc_mitsuba_ZStream_m_deflate_stream = R"doc()doc";

static const char *__doc_mitsuba_ZStream_m_didWrite = R"doc()doc";

static const char *__doc_mitsuba_ZStream_m_inflate_buffer = R"doc()doc";

static const char *__doc_mitsuba_ZStream_m_inflate_stream = R"doc()doc";

static const char *__doc_mitsuba_ZStream_read =
R"doc(Reads a specified amount of data from the stream, decompressing it
first using ZLib. Throws an exception when the stream ended
prematurely.)doc";

static const char *__doc_mitsuba_ZStream_seek = R"doc(Unsupported. Always throws.)doc";

static const char *__doc_mitsuba_ZStream_size = R"doc(Unsupported. Always throws.)doc";

static const char *__doc_mitsuba_ZStream_tell = R"doc(Unsupported. Always throws.)doc";

static const char *__doc_mitsuba_ZStream_to_string = R"doc(Returns a string representation)doc";

static const char *__doc_mitsuba_ZStream_truncate = R"doc(/ Unsupported. Always throws.)doc";

static const char *__doc_mitsuba_ZStream_write =
R"doc(Writes a specified amount of data into the stream, compressing it
first using ZLib. Throws an exception when not all data could be
written.)doc";

static const char *__doc_mitsuba_bsdf =
R"doc(Returns the BSDF of the intersected shape.

The parameter ``ray`` must match the one used to create the
interaction record. This function computes texture coordinate partials
if this is required by the BSDF (e.g. for texture filtering).

Implementation in 'bsdf.h')doc";

static const char *__doc_mitsuba_cie1931_xyz =
R"doc(Evaluate the CIE 1931 XYZ color matching functions given a wavelength
in nanometers)doc";

static const char *__doc_mitsuba_cie1931_y =
R"doc(Evaluate the CIE 1931 Y color matching function given a wavelength in
nanometers)doc";

static const char *__doc_mitsuba_class = R"doc()doc";

static const char *__doc_mitsuba_comparator = R"doc()doc";

static const char *__doc_mitsuba_comparator_operator_call = R"doc()doc";

static const char *__doc_mitsuba_compute_shading_frame =
R"doc(Given a smoothly varying shading normal and a tangent of a shape
parameterization, compute a smoothly varying orthonormal frame.

Parameter ``n``:
    A shading normal at a surface position

Parameter ``dp_du``:
    Position derivative of the underlying parameterization with
    respect to the 'u' coordinate

Parameter ``frame``:
    Used to return the computed frame)doc";

static const char *__doc_mitsuba_coordinate_system = R"doc(Complete the set {a} to an orthonormal basis {a, b, c})doc";

static const char *__doc_mitsuba_coordinate_system_2 = R"doc(Complete the set {a} to an orthonormal basis {a, b, c})doc";

static const char *__doc_mitsuba_detail_Log = R"doc()doc";

static const char *__doc_mitsuba_detail_Throw = R"doc()doc";

static const char *__doc_mitsuba_detail_get_construct_functor = R"doc()doc";

static const char *__doc_mitsuba_detail_get_construct_functor_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_get_unserialize_functor = R"doc()doc";

static const char *__doc_mitsuba_detail_get_unserialize_functor_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_serialization_helper =
R"doc(The serialization_helper<T> implementations for new types should in
general be implemented as a series of calls to the lower-level
serialization_helper::{read,write} functions. This way, endianness
swapping needs only be handled at the lowest level.)doc";

static const char *__doc_mitsuba_detail_serialization_helper_2 =
R"doc(The serialization_helper<T> implementations for new types should in
general be implemented as a series of calls to the lower-level
serialization_helper::{read,write} functions. This way, endianness
swapping needs only be handled at the lowest level.)doc";

static const char *__doc_mitsuba_detail_serialization_helper_3 = R"doc()doc";

static const char *__doc_mitsuba_detail_serialization_helper_read =
R"doc(Reads ``count`` values of type T from stream ``s``, starting at its
current position. Note: ``count`` is the number of values, **not** a
size in bytes.

Support for additional types can be added in any header file by
declaring a template specialization for your type.)doc";

static const char *__doc_mitsuba_detail_serialization_helper_read_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_serialization_helper_type_id = R"doc()doc";

static const char *__doc_mitsuba_detail_serialization_helper_type_id_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_serialization_helper_write =
R"doc(Writes ``count`` values of type T into stream ``s`` starting at its
current position. Note: ``count`` is the number of values, **not** a
size in bytes.

Support for additional types can be added in any header file by
declaring a template specialization for your type.)doc";

static const char *__doc_mitsuba_detail_serialization_helper_write_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_static_max =
R"doc(Basic C++11 variant data structure

Significantly redesigned version of the approach described at
http://www.ojdip.net/2013/10/implementing-a-variant-type-in-cpp)doc";

static const char *__doc_mitsuba_detail_swap = R"doc()doc";

static const char *__doc_mitsuba_detail_swap_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_swap_3 = R"doc()doc";

static const char *__doc_mitsuba_detail_swap_4 = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_2 = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_copy = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_destruct = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_equals = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_move = R"doc()doc";

static const char *__doc_mitsuba_detail_variant_helper_visit = R"doc()doc";

static const char *__doc_mitsuba_filesystem_absolute =
R"doc(Returns an absolute path to the same location pointed by ``p``,
relative to ``base``.

See also:
    http ://en.cppreference.com/w/cpp/experimental/fs/absolute))doc";

static const char *__doc_mitsuba_filesystem_create_directory =
R"doc(Creates a directory at ``p`` as if ``mkdir`` was used. Returns true if
directory creation was successful, false otherwise. If ``p`` already
exists and is already a directory, the function does nothing (this
condition is not treated as an error).)doc";

static const char *__doc_mitsuba_filesystem_current_path = R"doc(Returns the current working directory (equivalent to getcwd))doc";

static const char *__doc_mitsuba_filesystem_equivalent =
R"doc(Checks whether two paths refer to the same file system object. Both
must refer to an existing file or directory. Symlinks are followed to
determine equivalence.)doc";

static const char *__doc_mitsuba_filesystem_exists = R"doc(Checks if ``p`` points to an existing filesystem object.)doc";

static const char *__doc_mitsuba_filesystem_file_size =
R"doc(Returns the size (in bytes) of a regular file at ``p``. Attempting to
determine the size of a directory (as well as any other file that is
not a regular file or a symlink) is treated as an error.)doc";

static const char *__doc_mitsuba_filesystem_is_directory = R"doc(Checks if ``p`` points to a directory.)doc";

static const char *__doc_mitsuba_filesystem_is_regular_file =
R"doc(Checks if ``p`` points to a regular file, as opposed to a directory or
symlink.)doc";

static const char *__doc_mitsuba_filesystem_path =
R"doc(Represents a path to a filesystem resource. On construction, the path
is parsed and stored in a system-agnostic representation. The path can
be converted back to the system-specific string using ``native()`` or
``string()``.)doc";

static const char *__doc_mitsuba_filesystem_path_clear = R"doc(Makes the path an empty path. An empty path is considered relative.)doc";

static const char *__doc_mitsuba_filesystem_path_empty = R"doc(Checks if the path is empty)doc";

static const char *__doc_mitsuba_filesystem_path_extension =
R"doc(Returns the extension of the filename component of the path (the
substring starting at the rightmost period, including the period).
Special paths '.' and '..' have an empty extension.)doc";

static const char *__doc_mitsuba_filesystem_path_filename = R"doc(Returns the filename component of the path, including the extension.)doc";

static const char *__doc_mitsuba_filesystem_path_is_absolute = R"doc(Checks if the path is absolute.)doc";

static const char *__doc_mitsuba_filesystem_path_is_relative = R"doc(Checks if the path is relative.)doc";

static const char *__doc_mitsuba_filesystem_path_m_absolute = R"doc()doc";

static const char *__doc_mitsuba_filesystem_path_m_path = R"doc()doc";

static const char *__doc_mitsuba_filesystem_path_native =
R"doc(Returns the path in the form of a native string, so that it can be
passed directly to system APIs. The path is constructed using the
system's preferred separator and the native string type.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_assign = R"doc(Assignment operator.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_assign_2 = R"doc(Move assignment operator.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_assign_3 =
R"doc(Assignment from the system's native string type. Acts similarly to the
string constructor.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_basic_string =
R"doc(Implicit conversion operator to the basic_string corresponding to the
system's character type. Equivalent to calling ``native()``.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_div = R"doc(Concatenates two paths with a directory separator.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_eq =
R"doc(Equality operator. Warning: this only checks for lexicographic
equivalence. To check whether two paths point to the same filesystem
resource, use ``equivalent``.)doc";

static const char *__doc_mitsuba_filesystem_path_operator_ne = R"doc(Inequality operator.)doc";

static const char *__doc_mitsuba_filesystem_path_parent_path =
R"doc(Returns the path to the parent directory. Returns an empty path if it
is already empty or if it has only one element.)doc";

static const char *__doc_mitsuba_filesystem_path_path =
R"doc(Default constructor. Constructs an empty path. An empty path is
considered relative.)doc";

static const char *__doc_mitsuba_filesystem_path_path_2 = R"doc(Copy constructor.)doc";

static const char *__doc_mitsuba_filesystem_path_path_3 = R"doc(Move constructor.)doc";

static const char *__doc_mitsuba_filesystem_path_path_4 =
R"doc(Construct a path from a string with native type. On Windows, the path
can use both '/' or '\\' as a delimiter.)doc";

static const char *__doc_mitsuba_filesystem_path_path_5 =
R"doc(Construct a path from a string with native type. On Windows, the path
can use both '/' or '\\' as a delimiter.)doc";

static const char *__doc_mitsuba_filesystem_path_replace_extension =
R"doc(Replaces the substring starting at the rightmost '.' symbol by the
provided string.

A '.' symbol is automatically inserted if the replacement does not
start with a dot. Removes the extension altogether if the empty path
is passed. If there is no extension, appends a '.' followed by the
replacement. If the path is empty, '.' or '..', the method does
nothing.

Returns *this.)doc";

static const char *__doc_mitsuba_filesystem_path_set = R"doc(Builds a path from the passed string.)doc";

static const char *__doc_mitsuba_filesystem_path_str = R"doc()doc";

static const char *__doc_mitsuba_filesystem_path_string = R"doc(Equivalent to native(), converted to the std::string type)doc";

static const char *__doc_mitsuba_filesystem_path_tokenize =
R"doc(Splits a string into tokens delimited by any of the characters passed
in ``delim``.)doc";

static const char *__doc_mitsuba_filesystem_remove =
R"doc(Removes a file or empty directory. Returns true if removal was
successful, false if there was an error (e.g. the file did not exist).)doc";

static const char *__doc_mitsuba_filesystem_rename =
R"doc(Renames a file or directory. Returns true if renaming was successful,
false if there was an error (e.g. the file did not exist).)doc";

static const char *__doc_mitsuba_filesystem_resize_file =
R"doc(Changes the size of the regular file named by ``p`` as if ``truncate``
was called. If the file was larger than ``target_length``, the
remainder is discarded. The file must exist.)doc";

static const char *__doc_mitsuba_for_each_type =
R"doc(The following is used to ensure that the getters and setters for all
the same types are available for both Stream implementations and
\AnnotatedStream.)doc";

static const char *__doc_mitsuba_for_each_type_2 = R"doc(Base case)doc";

static const char *__doc_mitsuba_for_each_type_recurse = R"doc()doc";

static const char *__doc_mitsuba_fresnel =
R"doc(Calculates the unpolarized Fresnel reflection coefficient at a planar
interface between two dielectrics

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Relative refractive index of the interface. A value greater than
    1.0 means that the surface normal is pointing into the region of
    lower density.

Returns:
    A tuple (F, cos_theta_t, eta_it, eta_ti) consisting of

F Fresnel reflection coefficient.

cos_theta_t Cosine of the angle between the surface normal and the
transmitted ray

eta_it Relative index of refraction in the direction of travel.

eta_ti Reciprocal of the relative index of refraction in the direction
of travel. This also happens to be equal to the scale factor that must
be applied to the X and Y component of the refracted direction.)doc";

static const char *__doc_mitsuba_fresnel_conductor =
R"doc(Calculates the unpolarized Fresnel reflection coefficient at a planar
interface of a conductor, i.e. a surface with a complex-valued
relative index of refraction

Remark:
    The implementation assumes that cos_theta_i > 0, i.e. light enters
    from *outside* of the conducting layer (generally a reasonable
    assumption unless very thin layers are being simulated)

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Relative refractive index (complex-valued)

Returns:
    The unpolarized Fresnel reflection coefficient.)doc";

static const char *__doc_mitsuba_fresnel_diffuse_reflectance =
R"doc(Computes the diffuse unpolarized Fresnel reflectance of a dielectric
material (sometimes referred to as "Fdr").

This value quantifies what fraction of diffuse incident illumination
will, on average, be reflected at a dielectric material boundary

Parameter ``eta``:
    Relative refraction coefficient

Returns:
    F, the unpolarized Fresnel coefficient.)doc";

static const char *__doc_mitsuba_fresnel_polarized =
R"doc(Calculates the polarized Fresnel reflection coefficient at a planar
interface between two dielectrics. Returns complex values encoding the
amplitude and phase shift of the s- and p-polarized waves.

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Real-valued relative refractive index of the interface. A value
    greater than 1.0 case means that the surface normal points into
    the region of lower density.

Returns:
    A tuple (a_s, a_p, cos_theta_t, eta_it, eta_ti) consisting of

a_s Perpendicularly polarized wave amplitude and phase shift.

a_p Parallel polarized wave amplitude and phase shift.

cos_theta_t Cosine of the angle between the surface normal and the
transmitted ray. Zero in the case of total internal reflection.

eta_it Relative index of refraction in the direction of travel

eta_ti Reciprocal of the relative index of refraction in the direction
of travel. This also happens to be equal to the scale factor that must
be applied to the X and Y component of the refracted direction.)doc";

static const char *__doc_mitsuba_fresnel_polarized_2 =
R"doc(Calculates the polarized Fresnel reflection coefficient at a planar
interface between two dielectrics or conductors. Returns complex
values encoding the amplitude and phase shift of the s- and
p-polarized waves.

This is the most general version, which subsumes all others (at the
cost of transcendental function evaluations in the complex-valued
arithmetic)

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Complex-valued relative refractive index of the interface. In the
    real case, a value greater than 1.0 case means that the surface
    normal points into the region of lower density.

Returns:
    A tuple (a_s, a_p, cos_theta_t, eta_it, eta_ti) consisting of

a_s Perpendicularly polarized wave amplitude and phase shift.

a_p Parallel polarized wave amplitude and phase shift.

cos_theta_t Cosine of the angle between the surface normal and the
transmitted ray. Zero in the case of total internal reflection.

eta_it Relative index of refraction in the direction of travel

eta_ti Reciprocal of the relative index of refraction in the direction
of travel. In the real-valued case, this also happens to be equal to
the scale factor that must be applied to the X and Y component of the
refracted direction.)doc";

static const char *__doc_mitsuba_function_traits = R"doc(Type trait to inspect the return and argument types of functions)doc";

static const char *__doc_mitsuba_hash = R"doc()doc";

static const char *__doc_mitsuba_hash_2 = R"doc()doc";

static const char *__doc_mitsuba_hash_3 = R"doc()doc";

static const char *__doc_mitsuba_hash_4 = R"doc()doc";

static const char *__doc_mitsuba_hash_5 = R"doc()doc";

static const char *__doc_mitsuba_hash_6 = R"doc()doc";

static const char *__doc_mitsuba_hash_combine = R"doc()doc";

static const char *__doc_mitsuba_hasher = R"doc()doc";

static const char *__doc_mitsuba_hasher_operator_call = R"doc()doc";

static const char *__doc_mitsuba_is_constructible =
R"doc(Replacement for std::is_constructible which also works when the
destructor is not accessible)doc";

static const char *__doc_mitsuba_is_constructible_test = R"doc()doc";

static const char *__doc_mitsuba_is_constructible_test_2 = R"doc()doc";

static const char *__doc_mitsuba_librender_nop =
R"doc(Dummy function which can be called to ensure that the librender shared
library is loaded)doc";

static const char *__doc_mitsuba_lookup_ior = R"doc()doc";

static const char *__doc_mitsuba_lookup_ior_2 = R"doc()doc";

static const char *__doc_mitsuba_lookup_ior_3 = R"doc()doc";

static const char *__doc_mitsuba_luminance = R"doc()doc";

static const char *__doc_mitsuba_luminance_2 = R"doc()doc";

static const char *__doc_mitsuba_math_bisect =
R"doc(Bisect a floating point interval given a predicate function

This function takes an interval [``left``, ``right``] and a predicate
``pred`` as inputs. It assumes that ``pred(left)==true`` and
``pred(right)==false``. It also assumes that there is a single
floating point number ``t`` such that ``pred`` is ``True`` for all
values in the range [``left``, ``t``] and ``False`` for all values in
the range (``t``, ``right``].

The bisection search then finds and returns ``t`` by repeatedly
splitting the input interval. The number of iterations is roughly
bounded by the number of bits of the underlying floating point
representation.)doc";

static const char *__doc_mitsuba_math_chi2 =
R"doc(Compute the Chi^2 statistic and degrees of freedom of the given arrays
while pooling low-valued entries together

Given a list of observations counts (``obs[i]``) and expected
observation counts (``exp[i]``), this function accumulates the Chi^2
statistic, that is, ``(obs-exp)^2 / exp`` for each element ``0, ...,
n-1``.

Minimum expected cell frequency. The Chi^2 test statistic is not
useful when when the expected frequency in a cell is low (e.g. less
than 5), because normality assumptions break down in this case.
Therefore, the implementation will merge such low-frequency cells when
they fall below the threshold specified here. Specifically, low-valued
cells with ``exp[i] < pool_threshold`` are pooled into larger groups
that are above the threshold before their contents are added to the
Chi^2 statistic.

The function returns the statistic value, degrees of freedom, below-
treshold entries and resulting number of pooled regions.)doc";

static const char *__doc_mitsuba_math_find_interval =
R"doc(Find an interval in an ordered set

This function is very similar to ``std::upper_bound``, but it uses a
functor rather than an actual array to permit working with
procedurally defined data. It returns the index ``i`` such that
pred(i) is ``True`` and ``pred(i+1)`` is ``False``.

This function is primarily used to locate an interval (i, i+1) for
linear interpolation, hence its name. To avoid issues with out of
bounds accesses, and to deal with predicates that evaluate to ``True``
or ``False`` on the entire domain, the returned left interval index is
clamped to the range ``[left, right-2]``.

In particular: (i) If there is no index such that pred(i) is true, we
return (left). (ii) If there is no index such that pred(i+1) is false,
we return (right-2).)doc";

static const char *__doc_mitsuba_math_find_interval_2 =
R"doc(Find an interval in an ordered set

This function is very similar to ``std::upper_bound``, but it uses a
functor rather than an actual array to permit working with
procedurally defined data. It returns the index ``i`` such that
pred(i) is ``True`` and ``pred(i+1)`` is ``False``.

This function is primarily used to locate an interval (i, i+1) for
linear interpolation, hence its name. To avoid issues with out of
bounds accesses, and to deal with predicates that evaluate to ``True``
or ``False`` on the entire domain, the returned left interval index is
clamped to the range ``[left, right-2]``.

In particular: (i) If there is no index such that pred(i) is true, we
return (left). (ii) If there is no index such that pred(i+1) is false,
we return (right-2).

Remark:
    This function is intended for vectorized predicatesand
    additionally accepts a mask as an input. This mask can be used to
    disable some of the computations done in the predicate, which
    receives it as its second parameter.)doc";

static const char *__doc_mitsuba_math_find_interval_3 = R"doc()doc";

static const char *__doc_mitsuba_math_find_interval_4 = R"doc()doc";

static const char *__doc_mitsuba_math_is_power_of_two = R"doc(Check whether the provided integer is a power of two)doc";

static const char *__doc_mitsuba_math_legendre_p = R"doc(Evaluate the l-th Legendre polynomial using recurrence)doc";

static const char *__doc_mitsuba_math_legendre_p_2 = R"doc(Evaluate an associated Legendre polynomial using recurrence)doc";

static const char *__doc_mitsuba_math_legendre_pd =
R"doc(Evaluate the l-th Legendre polynomial and its derivative using
recurrence)doc";

static const char *__doc_mitsuba_math_legendre_pd_diff = R"doc(Evaluate the function legendre_pd(l+1, x) - legendre_pd(l-1, x))doc";

static const char *__doc_mitsuba_math_log2i_ceil = R"doc(Ceiling of base-2 logarithm)doc";

static const char *__doc_mitsuba_math_modulo = R"doc(Always-positive modulo function)doc";

static const char *__doc_mitsuba_math_round_to_power_of_two = R"doc(Round an unsigned integer to the next integer power of two)doc";

static const char *__doc_mitsuba_math_sample_shifted = R"doc(//! @})doc";

static const char *__doc_mitsuba_math_sample_shifted_2 =
R"doc(Map a uniformly distributed sample to an array of samples with shifts

Given a floating point value ``x`` on the interval ``[0, 1]`` return a
floating point array with values ``[x, x+offset, x+2*offset, ...]``,
where ``offset`` is the reciprocal of the array size. Entries that
become greater than 1.0 wrap around to the other side of the unit
inteval.

This operation is useful to implement a type of correlated
stratification in the context of Monte Carlo integration.)doc";

static const char *__doc_mitsuba_math_solve_quadratic =
R"doc(Solve a quadratic equation of the form a*x^2 + b*x + c = 0.

Returns:
    ``True`` if a solution could be found)doc";

static const char *__doc_mitsuba_math_sphdir = R"doc(//! @{ \name Helper functions for spherical geometry)doc";

static const char *__doc_mitsuba_math_ulpdiff =
R"doc(Compare the difference in ULPs between a reference value and another
given floating point number)doc";

static const char *__doc_mitsuba_mueller_absorber =
R"doc(Constructs the Mueller matrix of an ideal absorber

Parameter ``value``:
    The amount of absorption.)doc";

static const char *__doc_mitsuba_mueller_depolarizer =
R"doc(Constructs the Mueller matrix of an ideal depolarizer

Parameter ``value``:
    The value of the (0, 0) element)doc";

static const char *__doc_mitsuba_mueller_diattenuator =
R"doc(Constructs the Mueller matrix of a linear diattenuator, which
attenuates the electric field components at 0 and 90 degrees by 'x'
and 'y', * respectively.)doc";

static const char *__doc_mitsuba_mueller_linear_polarizer =
R"doc(Constructs the Mueller matrix of a linear polarizer which transmits
linear polarization at 0 degrees.

Parameter ``value``:
    The amount of attenuation of the transmitted component (1
    corresponds to an ideal polarizer).)doc";

static const char *__doc_mitsuba_mueller_rotated_element =
R"doc(Applies a counter-clockwise rotation to the mueller matrix of a given
element.)doc";

static const char *__doc_mitsuba_mueller_rotator =
R"doc(Constructs the Mueller matrix of an ideal rotator, which performs a
counter-clockwise rotation of the electric field by 'theta' radians.)doc";

static const char *__doc_mitsuba_mueller_specular_reflection =
R"doc(Calculates the Mueller matrix of a specular reflection at an interface
between two dielectrics or conductors.

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Complex-valued relative refractive index of the interface. In the
    real case, a value greater than 1.0 case means that the surface
    normal points into the region of lower density.)doc";

static const char *__doc_mitsuba_mueller_specular_transmission =
R"doc(Calculates the Mueller matrix of a specular transmission at an
interface between two dielectrics or conductors.

Parameter ``cos_theta_i``:
    Cosine of the angle between the surface normal and the incident
    ray

Parameter ``eta``:
    Complex-valued relative refractive index of the interface. A value
    greater than 1.0 in the real case means that the surface normal is
    pointing into the region of lower density.)doc";

static const char *__doc_mitsuba_next = R"doc(//! @{ \name Template specializations)doc";

static const char *__doc_mitsuba_next_2 = R"doc()doc";

static const char *__doc_mitsuba_next_3 = R"doc()doc";

static const char *__doc_mitsuba_next_4 = R"doc()doc";

static const char *__doc_mitsuba_operator_add = R"doc(Adding a vector to a point should always yield a point)doc";

static const char *__doc_mitsuba_operator_lshift = R"doc(Print a string representation of the bounding box)doc";

static const char *__doc_mitsuba_operator_lshift_2 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_3 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_4 = R"doc(Print a string representation of the bounding sphere)doc";

static const char *__doc_mitsuba_operator_lshift_5 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_6 = R"doc(Return a string representation of a frame)doc";

static const char *__doc_mitsuba_operator_lshift_7 = R"doc(Prints the canonical string representation of an object instance)doc";

static const char *__doc_mitsuba_operator_lshift_8 = R"doc(Prints the canonical string representation of an object instance)doc";

static const char *__doc_mitsuba_operator_lshift_9 = R"doc(Return a string representation of the ray)doc";

static const char *__doc_mitsuba_operator_lshift_10 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_11 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_12 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_13 = R"doc(//! @{ \name Printing)doc";

static const char *__doc_mitsuba_operator_lshift_14 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_15 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_16 = R"doc(//! @{ \name Misc implementations)doc";

static const char *__doc_mitsuba_operator_lshift_17 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_18 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_19 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_20 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_21 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_22 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_23 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_24 = R"doc()doc";

static const char *__doc_mitsuba_operator_lshift_25 = R"doc()doc";

static const char *__doc_mitsuba_operator_sub = R"doc(Subtracting two points should always yield a vector)doc";

static const char *__doc_mitsuba_operator_sub_2 = R"doc(Ssubtracting a vector from a point should always yield a point)doc";

static const char *__doc_mitsuba_pdf_rgb_spectrum =
R"doc(PDF for the sample_rgb_spectrum strategy. It is valid to call this
function for a single wavelength (Float), a set of wavelengths
(Spectrumf), a packet of wavelengths (SpectrumfP), etc. In all cases,
the PDF is returned per wavelength.)doc";

static const char *__doc_mitsuba_pdf_uniform_spectrum = R"doc()doc";

static const char *__doc_mitsuba_profiler_flags = R"doc()doc";

static const char *__doc_mitsuba_quad_composite_simpson =
R"doc(Computes the nodes and weights of a composite Simpson quadrature rule
with the given number of evaluations.

Integration is over the interval $[-1, 1]$, which will be split into
$(n-1) / 2$ sub-intervals with overlapping endpoints. A 3-point
Simpson rule is applied per interval, which is exact for polynomials
of degree three or less.

Parameter ``n``:
    Desired number of evalution points. Must be an odd number bigger
    than 3.

Returns:
    A tuple (nodes, weights) storing the nodes and weights of the
    quadrature rule.)doc";

static const char *__doc_mitsuba_quad_composite_simpson_38 =
R"doc(Computes the nodes and weights of a composite Simpson 3/8 quadrature
rule with the given number of evaluations.

Integration is over the interval $[-1, 1]$, which will be split into
$(n-1) / 3$ sub-intervals with overlapping endpoints. A 4-point
Simpson rule is applied per interval, which is exact for polynomials
of degree four or less.

Parameter ``n``:
    Desired number of evalution points. Must be an odd number bigger
    than 3.

Returns:
    A tuple (nodes, weights) storing the nodes and weights of the
    quadrature rule.)doc";

static const char *__doc_mitsuba_quad_gauss_legendre =
R"doc(Computes the nodes and weights of a Gauss-Legendre quadrature (aka
"Gaussian quadrature") rule with the given number of evaluations.

Integration is over the interval $[-1, 1]$. Gauss-Legendre quadrature
maximizes the order of exactly integrable polynomials achieves this up
to degree $2n-1$ (where $n$ is the number of function evaluations).

This method is numerically well-behaved until about $n=200$ and then
becomes progressively less accurate. It is generally not a good idea
to go much higher---in any case, a composite or adaptive integration
scheme will be superior for large $n$.

Parameter ``n``:
    Desired number of evalution points

Returns:
    A tuple (nodes, weights) storing the nodes and weights of the
    quadrature rule.)doc";

static const char *__doc_mitsuba_quad_gauss_lobatto =
R"doc(Computes the nodes and weights of a Gauss-Lobatto quadrature rule with
the given number of evaluations.

Integration is over the interval $[-1, 1]$. Gauss-Lobatto quadrature
is preferable to Gauss-Legendre quadrature whenever the endpoints of
the integration domain should explicitly be included. It maximizes the
order of exactly integrable polynomials subject to this constraint and
achieves this up to degree $2n-3$ (where $n$ is the number of function
evaluations).

This method is numerically well-behaved until about $n=200$ and then
becomes progressively less accurate. It is generally not a good idea
to go much higher---in any case, a composite or adaptive integration
scheme will be superior for large $n$.

Parameter ``n``:
    Desired number of evalution points

Returns:
    A tuple (nodes, weights) storing the nodes and weights of the
    quadrature rule.)doc";

static const char *__doc_mitsuba_ref =
R"doc(Reference counting helper

The *ref* template is a simple wrapper to store a pointer to an
object. It takes care of increasing and decreasing the object's
reference count as needed. When the last reference goes out of scope,
the associated object will be deallocated.

The advantage over C++ solutions such as ``std::shared_ptr`` is that
the reference count is very compactly integrated into the base object
itself.)doc";

static const char *__doc_mitsuba_ref_get = R"doc(Return a const pointer to the referenced object)doc";

static const char *__doc_mitsuba_ref_get_2 = R"doc(Return a pointer to the referenced object)doc";

static const char *__doc_mitsuba_ref_m_ptr = R"doc()doc";

static const char *__doc_mitsuba_ref_operator_T0 = R"doc(Return a pointer to the referenced object)doc";

static const char *__doc_mitsuba_ref_operator_assign = R"doc(Move another reference into the current one)doc";

static const char *__doc_mitsuba_ref_operator_assign_2 = R"doc(Overwrite this reference with another reference)doc";

static const char *__doc_mitsuba_ref_operator_assign_3 = R"doc(Overwrite this reference with a pointer to another object)doc";

static const char *__doc_mitsuba_ref_operator_bool = R"doc(Check if the object is defined)doc";

static const char *__doc_mitsuba_ref_operator_const_T0 = R"doc(Return a pointer to the referenced object)doc";

static const char *__doc_mitsuba_ref_operator_eq = R"doc(Compare this reference to another reference)doc";

static const char *__doc_mitsuba_ref_operator_eq_2 = R"doc(Compare this reference to a pointer)doc";

static const char *__doc_mitsuba_ref_operator_mul = R"doc(Return a C++ reference to the referenced object)doc";

static const char *__doc_mitsuba_ref_operator_mul_2 = R"doc(Return a const C++ reference to the referenced object)doc";

static const char *__doc_mitsuba_ref_operator_ne = R"doc(Compare this reference to another reference)doc";

static const char *__doc_mitsuba_ref_operator_ne_2 = R"doc(Compare this reference to a pointer)doc";

static const char *__doc_mitsuba_ref_operator_sub = R"doc(Access the object referenced by this reference)doc";

static const char *__doc_mitsuba_ref_operator_sub_2 = R"doc(Access the object referenced by this reference)doc";

static const char *__doc_mitsuba_ref_ref = R"doc(Create a ``nullptr``-valued reference)doc";

static const char *__doc_mitsuba_ref_ref_2 = R"doc(Construct a reference from a pointer)doc";

static const char *__doc_mitsuba_ref_ref_3 = R"doc(Copy constructor)doc";

static const char *__doc_mitsuba_ref_ref_4 = R"doc(Move constructor)doc";

static const char *__doc_mitsuba_reflect = R"doc(Reflection in local coordinates)doc";

static const char *__doc_mitsuba_reflect_2 = R"doc(Reflect ``wi`` with respect to a given surface normal)doc";

static const char *__doc_mitsuba_refract =
R"doc(Refraction in local coordinates

The 'cos_theta_t' and 'eta_ti' parameters are given by the last two
tuple entries returned by the fresnel and fresnel_polarized functions.)doc";

static const char *__doc_mitsuba_refract_2 =
R"doc(Refract ``wi`` with respect to a given surface normal

Parameter ``wi``:
    Direction to refract

Parameter ``m``:
    Surface normal

Parameter ``cos_theta_t``:
    Cosine of the angle between the normal the transmitted ray, as
    computed e.g. by fresnel.

Parameter ``eta_ti``:
    Relative index of refraction (transmitted / incident))doc";

static const char *__doc_mitsuba_round_to_packet_size = R"doc(Round an integer to a multiple of the current packet size)doc";

static const char *__doc_mitsuba_rtbench_naive_planar_independent_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_independent_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_independent_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_independent_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_morton_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_morton_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_morton_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_planar_morton_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_independent_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_independent_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_independent_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_independent_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_morton_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_morton_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_morton_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_naive_spherical_morton_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_independent_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_independent_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_independent_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_independent_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_morton_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_morton_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_morton_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_planar_morton_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_independent_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_independent_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_independent_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_independent_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_morton_packet = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_morton_packet_shadow = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_morton_scalar = R"doc()doc";

static const char *__doc_mitsuba_rtbench_spherical_morton_scalar_shadow = R"doc()doc";

static const char *__doc_mitsuba_sample_rgb_spectrum =
R"doc(Importance sample a "importance spectrum" that concentrates the
computation on wavelengths that are relevant for rendering of RGB data

Based on "An Improved Technique for Full Spectral Rendering" by
Radziszewski, Boryczko, and Alda

Returns a tuple with the sampled wavelength and inverse PDF)doc";

static const char *__doc_mitsuba_sample_tea_32 =
R"doc(Generate fast and reasonably good pseudorandom numbers using the Tiny
Encryption Algorithm (TEA) by David Wheeler and Roger Needham.

For details, refer to "GPU Random Numbers via the Tiny Encryption
Algorithm" by Fahad Zafar, Marc Olano, and Aaron Curtis.

Parameter ``v0``:
    First input value to be encrypted (could be the sample index)

Parameter ``v1``:
    Second input value to be encrypted (e.g. the requested random
    number dimension)

Parameter ``rounds``:
    How many rounds should be executed? The default for random number
    generation is 4.

Returns:
    A uniformly distributed 32-bit integer)doc";

static const char *__doc_mitsuba_sample_tea_64 =
R"doc(Generate fast and reasonably good pseudorandom numbers using the Tiny
Encryption Algorithm (TEA) by David Wheeler and Roger Needham.

For details, refer to "GPU Random Numbers via the Tiny Encryption
Algorithm" by Fahad Zafar, Marc Olano, and Aaron Curtis.

Parameter ``v0``:
    First input value to be encrypted (could be the sample index)

Parameter ``v1``:
    Second input value to be encrypted (e.g. the requested random
    number dimension)

Parameter ``rounds``:
    How many rounds should be executed? The default for random number
    generation is 4.

Returns:
    A uniformly distributed 64-bit integer)doc";

static const char *__doc_mitsuba_sample_tea_float =
R"doc(Alias to sample_tea_float32 or sample_tea_float64 based on compilation
flags)doc";

static const char *__doc_mitsuba_sample_tea_float32 =
R"doc(Generate fast and reasonably good pseudorandom numbers using the Tiny
Encryption Algorithm (TEA) by David Wheeler and Roger Needham.

This function uses sample_tea_ to return single precision floating
point numbers on the interval ``[0, 1)``

Parameter ``v0``:
    First input value to be encrypted (could be the sample index)

Parameter ``v1``:
    Second input value to be encrypted (e.g. the requested random
    number dimension)

Parameter ``rounds``:
    How many rounds should be executed? The default for random number
    generation is 4.

Returns:
    A uniformly distributed floating point number on the interval
    ``[0, 1)``)doc";

static const char *__doc_mitsuba_sample_tea_float64 =
R"doc(Generate fast and reasonably good pseudorandom numbers using the Tiny
Encryption Algorithm (TEA) by David Wheeler and Roger Needham.

This function uses sample_tea_ to return double precision floating
point numbers on the interval ``[0, 1)``

Parameter ``v0``:
    First input value to be encrypted (could be the sample index)

Parameter ``v1``:
    Second input value to be encrypted (e.g. the requested random
    number dimension)

Parameter ``rounds``:
    How many rounds should be executed? The default for random number
    generation is 4.

Returns:
    A uniformly distributed floating point number on the interval
    ``[0, 1)``)doc";

static const char *__doc_mitsuba_sample_uniform_spectrum = R"doc()doc";

static const char *__doc_mitsuba_spline_eval_1d =
R"doc(Evaluate a cubic spline interpolant of a *uniformly* sampled 1D
function

The implementation relies on Catmull-Rom splines, i.e. it uses finite
differences to approximate the derivatives at the endpoints of each
spline segment.

Template parameter ``Extrapolate``:
    Extrapolate values when ``x`` is out of range? (default:
    ``False``)

Parameter ``min``:
    Position of the first node

Parameter ``max``:
    Position of the last node

Parameter ``values``:
    Array containing ``size`` regularly spaced evaluations in the
    range [``min``, ``max``] of the approximated function.

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``x``:
    Evaluation point

Remark:
    The Python API lacks the ``size`` parameter, which is inferred
    automatically from the size of the input array.

Remark:
    The Python API provides a vectorized version which evaluates the
    function for many arguments ``x``.

Returns:
    The interpolated value or zero when ``Extrapolate=false`` and
    ``x`` lies outside of [``min``, ``max``])doc";

static const char *__doc_mitsuba_spline_eval_1d_2 =
R"doc(Evaluate a cubic spline interpolant of a *non*-uniformly sampled 1D
function

The implementation relies on Catmull-Rom splines, i.e. it uses finite
differences to approximate the derivatives at the endpoints of each
spline segment.

Template parameter ``Extrapolate``:
    Extrapolate values when ``x`` is out of range? (default:
    ``False``)

Parameter ``nodes``:
    Array containing ``size`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated.
    They must be provided in *increasing* order.

Parameter ``values``:
    Array containing function evaluations matched to the entries of
    ``nodes``.

Parameter ``size``:
    Denotes the size of the ``nodes`` and ``values`` array

Parameter ``x``:
    Evaluation point

Remark:
    The Python API lacks the ``size`` parameter, which is inferred
    automatically from the size of the input array

Remark:
    The Python API provides a vectorized version which evaluates the
    function for many arguments ``x``.

Returns:
    The interpolated value or zero when ``Extrapolate=false`` and
    ``x`` lies outside of \a [``min``, ``max``])doc";

static const char *__doc_mitsuba_spline_eval_2d =
R"doc(Evaluate a cubic spline interpolant of a uniformly sampled 2D function

This implementation relies on a tensor product of Catmull-Rom splines,
i.e. it uses finite differences to approximate the derivatives for
each dimension at the endpoints of spline patches.

Template parameter ``Extrapolate``:
    Extrapolate values when ``p`` is out of range? (default:
    ``False``)

Parameter ``nodes1``:
    Arrays containing ``size1`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated
    on the ``X`` axis (in increasing order)

Parameter ``size1``:
    Denotes the size of the ``nodes1`` array

Parameter ``nodes``:
    Arrays containing ``size2`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated
    on the ``Y`` axis (in increasing order)

Parameter ``size2``:
    Denotes the size of the ``nodes2`` array

Parameter ``values``:
    A 2D floating point array of ``size1*size2`` cells containing
    irregularly spaced evaluations of the function to be interpolated.
    Consecutive entries of this array correspond to increments in the
    ``X`` coordinate.

Parameter ``x``:
    ``X`` coordinate of the evaluation point

Parameter ``y``:
    ``Y`` coordinate of the evaluation point

Remark:
    The Python API lacks the ``size1`` and ``size2`` parameters, which
    are inferred automatically from the size of the input arrays.

Returns:
    The interpolated value or zero when ``Extrapolate=false``tt> and
    ``(x,y)`` lies outside of the node range)doc";

static const char *__doc_mitsuba_spline_eval_spline =
R"doc(Compute the definite integral and derivative of a cubic spline that is
parameterized by the function values and derivatives at the endpoints
of the interval ``[0, 1]``.

Parameter ``f0``:
    The function value at the left position

Parameter ``f1``:
    The function value at the right position

Parameter ``d0``:
    The function derivative at the left position

Parameter ``d1``:
    The function derivative at the right position

Parameter ``t``:
    The parameter variable

Returns:
    The interpolated function value at ``t``)doc";

static const char *__doc_mitsuba_spline_eval_spline_d =
R"doc(Compute the value and derivative of a cubic spline that is
parameterized by the function values and derivatives of the interval
``[0, 1]``.

Parameter ``f0``:
    The function value at the left position

Parameter ``f1``:
    The function value at the right position

Parameter ``d0``:
    The function derivative at the left position

Parameter ``d1``:
    The function derivative at the right position

Parameter ``t``:
    The parameter variable

Returns:
    The interpolated function value and its derivative at ``t``)doc";

static const char *__doc_mitsuba_spline_eval_spline_i =
R"doc(Compute the definite integral and value of a cubic spline that is
parameterized by the function values and derivatives of the interval
``[0, 1]``.

Parameter ``f0``:
    The function value at the left position

Parameter ``f1``:
    The function value at the right position

Parameter ``d0``:
    The function derivative at the left position

Parameter ``d1``:
    The function derivative at the right position

Returns:
    The definite integral and the interpolated function value at ``t``)doc";

static const char *__doc_mitsuba_spline_eval_spline_weights =
R"doc(Compute weights to perform a spline-interpolated lookup on a
*uniformly* sampled 1D function.

The implementation relies on Catmull-Rom splines, i.e. it uses finite
differences to approximate the derivatives at the endpoints of each
spline segment. The resulting weights are identical those internally
used by sample_1d().

Template parameter ``Extrapolate``:
    Extrapolate values when ``x`` is out of range? (default:
    ``False``)

Parameter ``min``:
    Position of the first node

Parameter ``max``:
    Position of the last node

Parameter ``size``:
    Denotes the number of function samples

Parameter ``x``:
    Evaluation point

Parameter ``weights``:
    Pointer to a weight array of size 4 that will be populated

Remark:
    In the Python API, the ``offset`` and ``weights`` parameters are
    returned as the second and third elements of a triple.

Returns:
    A boolean set to ``True`` on success and ``False`` when
    ``Extrapolate=false`` and ``x`` lies outside of [``min``, ``max``]
    and an offset into the function samples associated with weights[0])doc";

static const char *__doc_mitsuba_spline_eval_spline_weights_2 =
R"doc(Compute weights to perform a spline-interpolated lookup on a
*non*-uniformly sampled 1D function.

The implementation relies on Catmull-Rom splines, i.e. it uses finite
differences to approximate the derivatives at the endpoints of each
spline segment. The resulting weights are identical those internally
used by sample_1d().

Template parameter ``Extrapolate``:
    Extrapolate values when ``x`` is out of range? (default:
    ``False``)

Parameter ``nodes``:
    Array containing ``size`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated.
    They must be provided in *increasing* order.

Parameter ``size``:
    Denotes the size of the ``nodes`` array

Parameter ``x``:
    Evaluation point

Parameter ``weights``:
    Pointer to a weight array of size 4 that will be populated

Remark:
    The Python API lacks the ``size`` parameter, which is inferred
    automatically from the size of the input array. The ``offset`` and
    ``weights`` parameters are returned as the second and third
    elements of a triple.

Returns:
    A boolean set to ``True`` on success and ``False`` when
    ``Extrapolate=false`` and ``x`` lies outside of [``min``, ``max``]
    and an offset into the function samples associated with weights[0])doc";

static const char *__doc_mitsuba_spline_integrate_1d =
R"doc(Computes a prefix sum of integrals over segments of a *uniformly*
sampled 1D Catmull-Rom spline interpolant

This is useful for sampling spline segments as part of an importance
sampling scheme (in conjunction with sample_1d)

Parameter ``min``:
    Position of the first node

Parameter ``max``:
    Position of the last node

Parameter ``values``:
    Array containing ``size`` regularly spaced evaluations in the
    range [``min``, ``max``] of the approximated function.

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``out``:
    An array with ``size`` entries, which will be used to store the
    prefix sum

Remark:
    The Python API lacks the ``size`` and ``out`` parameters. The
    former is inferred automatically from the size of the input array,
    and ``out`` is returned as a list.)doc";

static const char *__doc_mitsuba_spline_integrate_1d_2 =
R"doc(Computes a prefix sum of integrals over segments of a *non*-uniformly
sampled 1D Catmull-Rom spline interpolant

This is useful for sampling spline segments as part of an importance
sampling scheme (in conjunction with sample_1d)

Parameter ``nodes``:
    Array containing ``size`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated.
    They must be provided in *increasing* order.

Parameter ``values``:
    Array containing function evaluations matched to the entries of
    ``nodes``.

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``out``:
    An array with ``size`` entries, which will be used to store the
    prefix sum

Remark:
    The Python API lacks the ``size`` and ``out`` parameters. The
    former is inferred automatically from the size of the input array,
    and ``out`` is returned as a list.)doc";

static const char *__doc_mitsuba_spline_invert_1d =
R"doc(Invert a cubic spline interpolant of a *uniformly* sampled 1D
function. The spline interpolant must be *monotonically increasing*.

Parameter ``min``:
    Position of the first node

Parameter ``max``:
    Position of the last node

Parameter ``values``:
    Array containing ``size`` regularly spaced evaluations in the
    range [``min``, ``max``] of the approximated function.

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``y``:
    Input parameter for the inversion

Parameter ``eps``:
    Error tolerance (default: 1e-6f)

Returns:
    The spline parameter ``t`` such that ``eval_1d(..., t)=y``)doc";

static const char *__doc_mitsuba_spline_invert_1d_2 =
R"doc(Invert a cubic spline interpolant of a *non*-uniformly sampled 1D
function. The spline interpolant must be *monotonically increasing*.

Parameter ``nodes``:
    Array containing ``size`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated.
    They must be provided in *increasing* order.

Parameter ``values``:
    Array containing function evaluations matched to the entries of
    ``nodes``.

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``y``:
    Input parameter for the inversion

Parameter ``eps``:
    Error tolerance (default: 1e-6f)

Returns:
    The spline parameter ``t`` such that ``eval_1d(..., t)=y``)doc";

static const char *__doc_mitsuba_spline_sample_1d =
R"doc(Importance sample a segment of a *uniformly* sampled 1D Catmull-Rom
spline interpolant

Parameter ``min``:
    Position of the first node

Parameter ``max``:
    Position of the last node

Parameter ``values``:
    Array containing ``size`` regularly spaced evaluations in the
    range [``min``, ``max``] of the approximated function.

Parameter ``cdf``:
    Array containing a cumulative distribution function computed by
    integrate_1d().

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``sample``:
    A uniformly distributed random sample in the interval ``[0,1]``

Parameter ``eps``:
    Error tolerance (default: 1e-6f)

Returns:
    1. The sampled position 2. The value of the spline evaluated at
    the sampled position 3. The probability density at the sampled
    position (which only differs from item 2. when the function does
    not integrate to one))doc";

static const char *__doc_mitsuba_spline_sample_1d_2 =
R"doc(Importance sample a segment of a *non*-uniformly sampled 1D Catmull-
Rom spline interpolant

Parameter ``nodes``:
    Array containing ``size`` non-uniformly spaced values denoting
    positions the where the function to be interpolated was evaluated.
    They must be provided in *increasing* order.

Parameter ``values``:
    Array containing function evaluations matched to the entries of
    ``nodes``.

Parameter ``cdf``:
    Array containing a cumulative distribution function computed by
    integrate_1d().

Parameter ``size``:
    Denotes the size of the ``values`` array

Parameter ``sample``:
    A uniformly distributed random sample in the interval ``[0,1]``

Parameter ``eps``:
    Error tolerance (default: 1e-6f)

Returns:
    1. The sampled position 2. The value of the spline evaluated at
    the sampled position 3. The probability density at the sampled
    position (which only differs from item 2. when the function does
    not integrate to one))doc";

static const char *__doc_mitsuba_srgb_model_eval = R"doc()doc";

static const char *__doc_mitsuba_srgb_model_eval_rgb = R"doc(Sanity check: convert the coefficients back to sRGB)doc";

static const char *__doc_mitsuba_srgb_model_fetch =
R"doc(Look up the model coefficients for a sRGB color value @param c An sRGB
color value where all components are in [0, 1]. @return Coefficients
for use with srgb_model_eval)doc";

static const char *__doc_mitsuba_srgb_model_mean = R"doc()doc";

static const char *__doc_mitsuba_string_ends_with = R"doc(Check if the given string ends with a specified suffix)doc";

static const char *__doc_mitsuba_string_indent = R"doc(Indent every line of a string by some number of spaces)doc";

static const char *__doc_mitsuba_string_indent_2 =
R"doc(Turn a type into a string representation and indent every line by some
number of spaces)doc";

static const char *__doc_mitsuba_string_indent_3 = R"doc()doc";

static const char *__doc_mitsuba_string_indent_4 = R"doc()doc";

static const char *__doc_mitsuba_string_replace_inplace = R"doc()doc";

static const char *__doc_mitsuba_string_starts_with = R"doc(Check if the given string starts with a specified prefix)doc";

static const char *__doc_mitsuba_string_to_lower =
R"doc(Return a lower-case version of the given string (warning: not unicode
compliant))doc";

static const char *__doc_mitsuba_string_to_upper =
R"doc(Return a upper-case version of the given string (warning: not unicode
compliant))doc";

static const char *__doc_mitsuba_string_tokenize =
R"doc(Chop up the string given a set of delimiters (warning: not unicode
compliant))doc";

static const char *__doc_mitsuba_string_trim = R"doc(Remove leading and trailing characters)doc";

static const char *__doc_mitsuba_struct_traits = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_2 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_3 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_4 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_5 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_6 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_7 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_8 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_9 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_10 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_11 = R"doc()doc";

static const char *__doc_mitsuba_struct_traits_12 = R"doc()doc";

static const char *__doc_mitsuba_to_xyz = R"doc()doc";

static const char *__doc_mitsuba_tuple_hasher = R"doc()doc";

static const char *__doc_mitsuba_tuple_hasher_operator_call = R"doc()doc";

static const char *__doc_mitsuba_type_mask_to_string = R"doc()doc";

static const char *__doc_mitsuba_type_suffix =
R"doc(Convenience function which computes an array size/type suffix (like
'2u' or '3fP'))doc";

static const char *__doc_mitsuba_util_core_count = R"doc(Determine the number of available CPU cores (including virtual cores))doc";

static const char *__doc_mitsuba_util_detect_debugger = R"doc(Returns 'true' if the application is running inside a debugger)doc";

static const char *__doc_mitsuba_util_library_path = R"doc(Return the absolute path to <tt>libmitsuba-core.dylib/so/dll<tt>)doc";

static const char *__doc_mitsuba_util_mem_string = R"doc(Turn a memory size into a human-readable string)doc";

static const char *__doc_mitsuba_util_terminal_width = R"doc(Determine the width of the terminal window that is used to run Mitsuba)doc";

static const char *__doc_mitsuba_util_time_string =
R"doc(Convert a time difference (in seconds) to a string representation

Parameter ``time``:
    Time difference in (fractional) sections

Parameter ``precise``:
    When set to true, a higher-precision string representation is
    generated.)doc";

static const char *__doc_mitsuba_util_trap_debugger =
R"doc(Generate a trap instruction if running in a debugger; otherwise,
return.)doc";

static const char *__doc_mitsuba_variant = R"doc()doc";

static const char *__doc_mitsuba_variant_data = R"doc()doc";

static const char *__doc_mitsuba_variant_empty = R"doc()doc";

static const char *__doc_mitsuba_variant_is = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_assign = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_assign_2 = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_assign_3 = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_assign_4 = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_const_type_parameter_1_0 = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_eq = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_ne = R"doc()doc";

static const char *__doc_mitsuba_variant_operator_type_parameter_1_0 = R"doc()doc";

static const char *__doc_mitsuba_variant_type = R"doc()doc";

static const char *__doc_mitsuba_variant_type_info = R"doc()doc";

static const char *__doc_mitsuba_variant_variant = R"doc()doc";

static const char *__doc_mitsuba_variant_variant_2 = R"doc()doc";

static const char *__doc_mitsuba_variant_variant_3 = R"doc()doc";

static const char *__doc_mitsuba_variant_visit = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D =
R"doc(Implements a hierarchical sample warping scheme for 2D distributions
with linear interpolation and an optional dependence on additional
parameters

This class takes a rectangular floating point array as input and
constructs internal data structures to efficiently map uniform
variates from the unit square ``[0, 1]^2`` to a function on ``[0,
1]^2`` that linearly interpolates the input array.

The mapping is constructed from a sequence of ``log2(hmax(res))``
hierarchical sample warping steps, where ``res`` is the input array
resolution. It is bijective and generally very well-behaved (i.e. low
distortion), which makes it an ideal choice for structured point sets
such as the Halton or Sobol sequence.

The implementation also supports *conditional distributions*, i.e. 2D
distributions that depend on an arbitrary number of parameters
(indicated via the ``Dimension`` template parameter).

In this case, the input array should have dimensions ``N0 x N1 x ... x
Nn x res.y() x res.x()`` (where the last dimension is contiguous in
memory), and the ``param_res`` should be set to ``{ N0, N1, ..., Nn
}``, and ``param_values`` should contain the parameter values where
the distribution is discretized. Linear interpolation is used when
sampling or evaluating the distribution for in-between parameter
values.

Remark:
    The Python API exposes explicitly instantiated versions of this
    class named Hierarchical2D0, Hierarchical2D1, and Hierarchical2D2
    for data that depends on 0, 1, and 2 parameters, respectively.)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Hierarchical2D = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Hierarchical2D_2 =
R"doc(Construct a hierarchical sample warping scheme for floating point data
of resolution ``size``.

``param_res`` and ``param_values`` are only needed for conditional
distributions (see the text describing the Hierarchical2D class).

If ``normalize`` is set to ``False``, the implementation will not re-
scale the distribution so that it integrates to ``1``. It can still be
sampled (proportionally), but returned density values will reflect the
unnormalized values.

If ``build_hierarchy`` is set to ``False``, the implementation will
not construct the hierarchy needed for sample warping, which saves
memory in case this functionality is not needed (e.g. if only the
interpolation in ``eval``() is used). In this case, ``sample``() and
``invert``() can still be called without triggering undefined
behavior, but they will not return meaningful results.)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_Level = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_Level_2 = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_data = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_index =
R"doc(Convert from 2D pixel coordinates to an index indicating how the data
is laid out in memory.

The implementation stores 2x2 patches contigously in memory to improve
cache locality during hierarchical traversals)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_lookup = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_lookup_2 = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_ptr = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_size = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_Level_width = R"doc()doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_eval =
R"doc(Evaluate the density at position ``pos``. The distribution is
parameterized by ``param`` if applicable.)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_invert = R"doc(Inverse of the mapping implemented in ``sample``())doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_inv_patch_size = R"doc(Inverse of the above)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_levels = R"doc(MIP hierarchy over linearly interpolated patches)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_max_patch_index = R"doc(Number of bilinear patches in the X/Y dimension - 1)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_param_size = R"doc(Resolution of each parameter (optional))doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_param_strides = R"doc(Stride per parameter in units of sizeof(Float))doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_param_values = R"doc(Discretization of each parameter domain)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_patch_size = R"doc(Size of a bilinear patch in the unit square)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_m_vertex_count = R"doc(Resolution of the fine-resolution PDF data)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_sample =
R"doc(Given a uniformly distributed 2D sample, draw a sample from the
distribution (parameterized by ``param`` if applicable)

Returns the warped sample and associated probability density.)doc";

static const char *__doc_mitsuba_warp_Hierarchical2D_to_string = R"doc()doc";

static const char *__doc_mitsuba_warp_Marginal2D =
R"doc(Implements a marginal sample warping scheme for 2D distributions with
linear interpolation and an optional dependence on additional
parameters

This class takes a rectangular floating point array as input and
constructs internal data structures to efficiently map uniform
variates from the unit square ``[0, 1]^2`` to a function on ``[0,
1]^2`` that linearly interpolates the input array.

The mapping is constructed via the inversion method, which is applied
to a marginal distribution over rows, followed by a conditional
distribution over columns.

The implementation also supports *conditional distributions*, i.e. 2D
distributions that depend on an arbitrary number of parameters
(indicated via the ``Dimension`` template parameter).

In this case, the input array should have dimensions ``N0 x N1 x ... x
Nn x res.y() x res.x()`` (where the last dimension is contiguous in
memory), and the ``param_res`` should be set to ``{ N0, N1, ..., Nn
}``, and ``param_values`` should contain the parameter values where
the distribution is discretized. Linear interpolation is used when
sampling or evaluating the distribution for in-between parameter
values.

Remark:
    The Python API exposes explicitly instantiated versions of this
    class named Marginal2D0, Marginal2D1, and Marginal2D2 for data
    that depends on 0, 1, and 2 parameters, respectively.)doc";

static const char *__doc_mitsuba_warp_Marginal2D_Marginal2D = R"doc()doc";

static const char *__doc_mitsuba_warp_Marginal2D_Marginal2D_2 =
R"doc(Construct a marginal sample warping scheme for floating point data of
resolution ``size``.

``param_res`` and ``param_values`` are only needed for conditional
distributions (see the text describing the Marginal2D class).

If ``normalize`` is set to ``False``, the implementation will not re-
scale the distribution so that it integrates to ``1``. It can still be
sampled (proportionally), but returned density values will reflect the
unnormalized values.

If ``build_cdf`` is set to ``False``, the implementation will not
construct the cdf needed for sample warping, which saves memory in
case this functionality is not needed (e.g. if only the interpolation
in ``eval``() is used).)doc";

static const char *__doc_mitsuba_warp_Marginal2D_eval =
R"doc(Evaluate the density at position ``pos``. The distribution is
parameterized by ``param`` if applicable.)doc";

static const char *__doc_mitsuba_warp_Marginal2D_invert = R"doc(Inverse of the mapping implemented in ``sample``())doc";

static const char *__doc_mitsuba_warp_Marginal2D_lookup = R"doc()doc";

static const char *__doc_mitsuba_warp_Marginal2D_lookup_2 = R"doc()doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_conditional_cdf = R"doc()doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_data = R"doc(Density values)doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_inv_patch_size = R"doc(Size of a bilinear patch in the unit square)doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_marginal_cdf = R"doc(Marginal and conditional PDFs)doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_param_size = R"doc(Resolution of each parameter (optional))doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_param_strides = R"doc(Stride per parameter in units of sizeof(Float))doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_param_values = R"doc(Discretization of each parameter domain)doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_patch_size = R"doc(Size of a bilinear patch in the unit square)doc";

static const char *__doc_mitsuba_warp_Marginal2D_m_size = R"doc(Resolution of the discretized density function)doc";

static const char *__doc_mitsuba_warp_Marginal2D_sample =
R"doc(Given a uniformly distributed 2D sample, draw a sample from the
distribution (parameterized by ``param`` if applicable)

Returns the warped sample and associated probability density.)doc";

static const char *__doc_mitsuba_warp_Marginal2D_to_string = R"doc()doc";

static const char *__doc_mitsuba_warp_beckmann_to_square = R"doc(Inverse of the mapping square_to_uniform_cone)doc";

static const char *__doc_mitsuba_warp_cosine_hemisphere_to_square = R"doc(Inverse of the mapping square_to_cosine_hemisphere)doc";

static const char *__doc_mitsuba_warp_detail_i0 = R"doc()doc";

static const char *__doc_mitsuba_warp_detail_log_i0 = R"doc()doc";

static const char *__doc_mitsuba_warp_interval_to_nonuniform_tent =
R"doc(Warp a uniformly distributed sample on [0, 1] to a nonuniform tent
distribution with nodes ``{a, b, c}``)doc";

static const char *__doc_mitsuba_warp_interval_to_tent = R"doc(Warp a uniformly distributed sample on [0, 1] to a tent distribution)doc";

static const char *__doc_mitsuba_warp_square_to_beckmann = R"doc(Warp a uniformly distributed square sample to a Beckmann distribution)doc";

static const char *__doc_mitsuba_warp_square_to_beckmann_pdf = R"doc(Probability density of square_to_beckmann())doc";

static const char *__doc_mitsuba_warp_square_to_cosine_hemisphere =
R"doc(Sample a cosine-weighted vector on the unit hemisphere with respect to
solid angles)doc";

static const char *__doc_mitsuba_warp_square_to_cosine_hemisphere_pdf = R"doc(Density of square_to_cosine_hemisphere() with respect to solid angles)doc";

static const char *__doc_mitsuba_warp_square_to_rough_fiber =
R"doc(Warp a uniformly distributed square sample to a rough fiber
distribution)doc";

static const char *__doc_mitsuba_warp_square_to_rough_fiber_pdf = R"doc(Probability density of square_to_rough_fiber())doc";

static const char *__doc_mitsuba_warp_square_to_std_normal =
R"doc(Sample a point on a 2D standard normal distribution. Internally uses
the Box-Muller transformation)doc";

static const char *__doc_mitsuba_warp_square_to_std_normal_pdf = R"doc()doc";

static const char *__doc_mitsuba_warp_square_to_tent = R"doc(Warp a uniformly distributed square sample to a 2D tent distribution)doc";

static const char *__doc_mitsuba_warp_square_to_tent_pdf = R"doc(Density of square_to_tent per unit area.)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_cone =
R"doc(Uniformly sample a vector that lies within a given cone of angles
around the Z axis

Parameter ``cos_cutoff``:
    Cosine of the cutoff angle

Parameter ``sample``:
    A uniformly distributed sample on $[0,1]^2$)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_cone_pdf =
R"doc(Density of square_to_uniform_cone per unit area.

Parameter ``cos_cutoff``:
    Cosine of the cutoff angle)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_disk = R"doc(Uniformly sample a vector on a 2D disk)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_disk_concentric = R"doc(Low-distortion concentric square to disk mapping by Peter Shirley)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_disk_concentric_pdf = R"doc(Density of square_to_uniform_disk per unit area)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_disk_pdf = R"doc(Density of square_to_uniform_disk per unit area)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_hemisphere =
R"doc(Uniformly sample a vector on the unit hemisphere with respect to solid
angles)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_hemisphere_pdf = R"doc(Density of square_to_uniform_hemisphere() with respect to solid angles)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_sphere =
R"doc(Uniformly sample a vector on the unit sphere with respect to solid
angles)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_sphere_pdf = R"doc(Density of square_to_uniform_sphere() with respect to solid angles)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_square_concentric =
R"doc(Low-distortion concentric square to square mapping (meant to be used
in conjunction with another warping method that maps to the sphere))doc";

static const char *__doc_mitsuba_warp_square_to_uniform_triangle =
R"doc(Convert an uniformly distributed square sample into barycentric
coordinates)doc";

static const char *__doc_mitsuba_warp_square_to_uniform_triangle_pdf = R"doc(Density of square_to_uniform_triangle per unit area.)doc";

static const char *__doc_mitsuba_warp_square_to_von_mises_fisher =
R"doc(Warp a uniformly distributed square sample to a von Mises Fisher
distribution)doc";

static const char *__doc_mitsuba_warp_square_to_von_mises_fisher_pdf = R"doc(Probability density of square_to_von_mises_fisher())doc";

static const char *__doc_mitsuba_warp_tent_to_interval = R"doc(Warp a uniformly distributed sample on [0, 1] to a tent distribution)doc";

static const char *__doc_mitsuba_warp_tent_to_square = R"doc(Warp a uniformly distributed square sample to a 2D tent distribution)doc";

static const char *__doc_mitsuba_warp_uniform_cone_to_square = R"doc(Inverse of the mapping square_to_uniform_cone)doc";

static const char *__doc_mitsuba_warp_uniform_disk_to_square = R"doc(Inverse of the mapping square_to_uniform_disk)doc";

static const char *__doc_mitsuba_warp_uniform_disk_to_square_concentric = R"doc(Inverse of the mapping square_to_uniform_disk_concentric)doc";

static const char *__doc_mitsuba_warp_uniform_hemisphere_to_square = R"doc(Inverse of the mapping square_to_uniform_hemisphere)doc";

static const char *__doc_mitsuba_warp_uniform_sphere_to_square = R"doc(Inverse of the mapping square_to_uniform_sphere)doc";

static const char *__doc_mitsuba_warp_uniform_triangle_to_square = R"doc(Inverse of the mapping square_to_uniform_triangle)doc";

static const char *__doc_mitsuba_warp_von_mises_fisher_to_square = R"doc(Inverse of the mapping von_mises_fisher_to_square)doc";

static const char *__doc_mitsuba_xml_load_file = R"doc(Load a Mitsuba scene from an XML file)doc";

static const char *__doc_mitsuba_xml_load_string = R"doc(Load a Mitsuba scene from an XML string)doc";

static const char *__doc_operator_lshift = R"doc(Turns a vector of elements into a human-readable representation)doc";

static const char *__doc_std_hash =
R"doc(It's useful to be able to use envelopes as a hash table key. Add a
partial overload to STL (this is allowed by the standard))doc";

static const char *__doc_std_hash_operator_call = R"doc()doc";

static const char *__doc_zmq_catch_shutdown = R"doc()doc";

static const char *__doc_zmq_context = R"doc()doc";

static const char *__doc_zmq_context_close = R"doc()doc";

static const char *__doc_zmq_context_context = R"doc()doc";

static const char *__doc_zmq_context_context_2 = R"doc()doc";

static const char *__doc_zmq_context_context_3 = R"doc()doc";

static const char *__doc_zmq_context_context_4 = R"doc()doc";

static const char *__doc_zmq_context_operator_assign = R"doc()doc";

static const char *__doc_zmq_context_operator_assign_2 = R"doc()doc";

static const char *__doc_zmq_context_ptr = R"doc()doc";

static const char *__doc_zmq_dump = R"doc()doc";

static const char *__doc_zmq_envelope = R"doc()doc";

static const char *__doc_zmq_envelope_2 = R"doc()doc";

static const char *__doc_zmq_envelope_envelope = R"doc()doc";

static const char *__doc_zmq_exception = R"doc()doc";

static const char *__doc_zmq_exception_exception = R"doc()doc";

static const char *__doc_zmq_exception_exception_2 = R"doc()doc";

static const char *__doc_zmq_exception_value = R"doc()doc";

static const char *__doc_zmq_exception_value_2 = R"doc()doc";

static const char *__doc_zmq_exception_what = R"doc()doc";

static const char *__doc_zmq_exception_what_2 = R"doc()doc";

static const char *__doc_zmq_message = R"doc()doc";

static const char *__doc_zmq_message_copy = R"doc()doc";

static const char *__doc_zmq_message_data = R"doc()doc";

static const char *__doc_zmq_message_data_2 = R"doc()doc";

static const char *__doc_zmq_message_data_3 = R"doc()doc";

static const char *__doc_zmq_message_data_4 = R"doc()doc";

static const char *__doc_zmq_message_message = R"doc()doc";

static const char *__doc_zmq_message_message_2 = R"doc()doc";

static const char *__doc_zmq_message_message_3 = R"doc()doc";

static const char *__doc_zmq_message_message_4 = R"doc()doc";

static const char *__doc_zmq_message_message_5 = R"doc()doc";

static const char *__doc_zmq_message_message_6 = R"doc()doc";

static const char *__doc_zmq_message_more = R"doc()doc";

static const char *__doc_zmq_message_move = R"doc()doc";

static const char *__doc_zmq_message_msg = R"doc()doc";

static const char *__doc_zmq_message_operator_assign = R"doc()doc";

static const char *__doc_zmq_message_operator_assign_2 = R"doc()doc";

static const char *__doc_zmq_message_rebuild = R"doc()doc";

static const char *__doc_zmq_message_rebuild_2 = R"doc()doc";

static const char *__doc_zmq_message_rebuild_3 = R"doc()doc";

static const char *__doc_zmq_message_rebuild_4 = R"doc()doc";

static const char *__doc_zmq_message_size = R"doc()doc";

static const char *__doc_zmq_poll = R"doc()doc";

static const char *__doc_zmq_poll_2 = R"doc()doc";

static const char *__doc_zmq_poll_3 = R"doc()doc";

static const char *__doc_zmq_poll_4 = R"doc()doc";

static const char *__doc_zmq_poll_flags = R"doc()doc";

static const char *__doc_zmq_poll_flags_pollin = R"doc()doc";

static const char *__doc_zmq_poll_flags_pollout = R"doc()doc";

static const char *__doc_zmq_recv = R"doc()doc";

static const char *__doc_zmq_recvmore = R"doc()doc";

static const char *__doc_zmq_send = R"doc()doc";

static const char *__doc_zmq_sendmore = R"doc()doc";

static const char *__doc_zmq_socket = R"doc()doc";

static const char *__doc_zmq_socket_bind = R"doc()doc";

static const char *__doc_zmq_socket_bind_2 = R"doc()doc";

static const char *__doc_zmq_socket_close = R"doc()doc";

static const char *__doc_zmq_socket_connect = R"doc()doc";

static const char *__doc_zmq_socket_connect_2 = R"doc()doc";

static const char *__doc_zmq_socket_connected = R"doc()doc";

static const char *__doc_zmq_socket_discard_remainder = R"doc(Gobble up the rest of a (partial) message and throw an exception)doc";

static const char *__doc_zmq_socket_disconnect = R"doc()doc";

static const char *__doc_zmq_socket_disconnect_2 = R"doc()doc";

static const char *__doc_zmq_socket_getsockopt = R"doc()doc";

static const char *__doc_zmq_socket_getsockopt_2 = R"doc()doc";

static const char *__doc_zmq_socket_init = R"doc()doc";

static const char *__doc_zmq_socket_more = R"doc()doc";

static const char *__doc_zmq_socket_operator_assign = R"doc()doc";

static const char *__doc_zmq_socket_operator_assign_2 = R"doc()doc";

static const char *__doc_zmq_socket_operator_const_void = R"doc()doc";

static const char *__doc_zmq_socket_operator_void = R"doc()doc";

static const char *__doc_zmq_socket_ptr = R"doc()doc";

static const char *__doc_zmq_socket_recv = R"doc()doc";

static const char *__doc_zmq_socket_recv_2 = R"doc()doc";

static const char *__doc_zmq_socket_recv_3 = R"doc()doc";

static const char *__doc_zmq_socket_recv_4 = R"doc()doc";

static const char *__doc_zmq_socket_recv_5 = R"doc()doc";

static const char *__doc_zmq_socket_recv_6 = R"doc()doc";

static const char *__doc_zmq_socket_recvmore = R"doc()doc";

static const char *__doc_zmq_socket_recvmore_2 = R"doc()doc";

static const char *__doc_zmq_socket_recvmore_3 = R"doc()doc";

static const char *__doc_zmq_socket_recvmore_4 = R"doc()doc";

static const char *__doc_zmq_socket_recvmore_5 = R"doc()doc";

static const char *__doc_zmq_socket_recvmore_6 = R"doc()doc";

static const char *__doc_zmq_socket_send = R"doc()doc";

static const char *__doc_zmq_socket_send_2 = R"doc()doc";

static const char *__doc_zmq_socket_send_3 = R"doc()doc";

static const char *__doc_zmq_socket_send_4 = R"doc()doc";

static const char *__doc_zmq_socket_send_5 = R"doc()doc";

static const char *__doc_zmq_socket_send_6 = R"doc()doc";

static const char *__doc_zmq_socket_send_7 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_2 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_3 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_4 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_5 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_6 = R"doc()doc";

static const char *__doc_zmq_socket_sendmore_7 = R"doc()doc";

static const char *__doc_zmq_socket_setsockopt = R"doc()doc";

static const char *__doc_zmq_socket_setsockopt_2 = R"doc()doc";

static const char *__doc_zmq_socket_socket = R"doc()doc";

static const char *__doc_zmq_socket_socket_2 = R"doc()doc";

static const char *__doc_zmq_socket_socket_3 = R"doc()doc";

static const char *__doc_zmq_socket_socket_4 = R"doc()doc";

static const char *__doc_zmq_socket_type = R"doc()doc";

static const char *__doc_zmq_socket_type_dealer = R"doc()doc";

static const char *__doc_zmq_socket_type_pair = R"doc()doc";

static const char *__doc_zmq_socket_type_pub = R"doc()doc";

static const char *__doc_zmq_socket_type_pull = R"doc()doc";

static const char *__doc_zmq_socket_type_push = R"doc()doc";

static const char *__doc_zmq_socket_type_rep = R"doc()doc";

static const char *__doc_zmq_socket_type_req = R"doc()doc";

static const char *__doc_zmq_socket_type_router = R"doc()doc";

static const char *__doc_zmq_socket_type_sub = R"doc()doc";

static const char *__doc_zmq_socket_type_xpub = R"doc()doc";

static const char *__doc_zmq_socket_type_xsub = R"doc()doc";

static const char *__doc_zmq_socket_unbind = R"doc()doc";

static const char *__doc_zmq_socket_unbind_2 = R"doc()doc";

static const char *__doc_zmq_version = R"doc()doc";

static const char *__doc_zmq_zmq_check = R"doc()doc";

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

